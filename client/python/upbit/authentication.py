import jwt
import hashlib
import uuid
from urllib.parse import urlencode

from bravado.requests_client import Authenticator


class APIKeyAuthenticator(Authenticator):
    def __init__(self, host, access_key, secret_key):
        super(APIKeyAuthenticator, self).__init__(host)
        self.host = host
        self.access_key = access_key
        self.secret_key = secret_key

    def matches(self, url):
        return 'swg_mapper.json' not in url

    def apply(self, request):
        request.headers['User-Agent'] = "ujhin's Upbit SDKs"
        request.headers['Accept-Encoding'] = 'gzip, deflate'
        request.headers['Accept'] = '*/*'
        request.headers['Connection'] = 'keep-alive'
        request.headers['Authorization'] = self.generate_payload(request)
        return request

    def generate_payload(self, request):
        params = request.params
        data = request.data

        payload = {
            'access_key': self.access_key,
            'nonce': str(uuid.uuid4())
        }
        if isinstance(data, dict):
            params.update(data)
        if params:
            query = self.generate_query(params)

            h = hashlib.sha512()
            h.update(query.encode())
            query_hash = h.hexdigest()

            payload['query_hash'] = query_hash
            payload['query_hash_alg'] = 'SHA512'

        jwt_token = jwt.encode(payload, self.secret_key)
        authorize_token = f"Bearer {jwt_token}"
        return authorize_token

    def generate_query(self, params):
        query = urlencode({
            k: v
            for k, v in params.items()
            if (k != 'uuids') and (k != 'txids') and (k != 'identifiers')
        })
        if params.get('uuids'):
            uuids = params.pop('uuids')
            params["uuids[]"] = uuids
            uuids_query = '&'.join([f"uuids[]={_uuid}" for _uuid in uuids])
            query = f"{query}&{uuids_query}" if query else uuids_query
        if params.get('txids'):
            txids = params.pop('txids')
            params["txids[]"] = txids
            txids_query = '&'.join([f"txids[]={_txid}" for _txid in txids])
            query = f"{query}&{txids_query}" if query else txids_query
        if params.get('identifiers'):
            identifiers = params.pop('identifiers')
            params["identifiers[]"] = identifiers
            identifiers_query = '&'.join([
                f"identifiers[]={identifier}"
                for identifier in identifiers
            ])
            query = f"{query}&{identifiers}" if query else identifiers_query
        return query