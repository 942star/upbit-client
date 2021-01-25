/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGNewOrder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGNewOrder::SWGNewOrder(QString json) {
    init();
    this->fromJson(json);
}

SWGNewOrder::SWGNewOrder() {
    init();
}

SWGNewOrder::~SWGNewOrder() {
    this->cleanup();
}

void
SWGNewOrder::init() {
    uuid = new QString("");
    m_uuid_isSet = false;
    side = new QString("");
    m_side_isSet = false;
    ord_type = new QString("");
    m_ord_type_isSet = false;
    price = new QString("");
    m_price_isSet = false;
    avg_price = new QString("");
    m_avg_price_isSet = false;
    state = new QString("");
    m_state_isSet = false;
    market = new QString("");
    m_market_isSet = false;
    created_at = new QString("");
    m_created_at_isSet = false;
    volume = new QString("");
    m_volume_isSet = false;
    remaining_volume = new QString("");
    m_remaining_volume_isSet = false;
    reserved_fee = new QString("");
    m_reserved_fee_isSet = false;
    remaining_fee = new QString("");
    m_remaining_fee_isSet = false;
    paid_fee = new QString("");
    m_paid_fee_isSet = false;
    locked = new QString("");
    m_locked_isSet = false;
    executed_volume = new QString("");
    m_executed_volume_isSet = false;
    trades_count = 0.0;
    m_trades_count_isSet = false;
}

void
SWGNewOrder::cleanup() {
    if(uuid != nullptr) { 
        delete uuid;
    }
    if(side != nullptr) { 
        delete side;
    }
    if(ord_type != nullptr) { 
        delete ord_type;
    }
    if(price != nullptr) { 
        delete price;
    }
    if(avg_price != nullptr) { 
        delete avg_price;
    }
    if(state != nullptr) { 
        delete state;
    }
    if(market != nullptr) { 
        delete market;
    }
    if(created_at != nullptr) { 
        delete created_at;
    }
    if(volume != nullptr) { 
        delete volume;
    }
    if(remaining_volume != nullptr) { 
        delete remaining_volume;
    }
    if(reserved_fee != nullptr) { 
        delete reserved_fee;
    }
    if(remaining_fee != nullptr) { 
        delete remaining_fee;
    }
    if(paid_fee != nullptr) { 
        delete paid_fee;
    }
    if(locked != nullptr) { 
        delete locked;
    }
    if(executed_volume != nullptr) { 
        delete executed_volume;
    }
    if(trades_count != nullptr) { 
        delete trades_count;
    }
}

SWGNewOrder*
SWGNewOrder::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNewOrder::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&uuid, pJson["uuid"], "QString", "QString");
    
    ::Swagger::setValue(&side, pJson["side"], "QString", "QString");
    
    ::Swagger::setValue(&ord_type, pJson["ord_type"], "QString", "QString");
    
    ::Swagger::setValue(&price, pJson["price"], "QString", "QString");
    
    ::Swagger::setValue(&avg_price, pJson["avg_price"], "QString", "QString");
    
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    
    ::Swagger::setValue(&market, pJson["market"], "QString", "QString");
    
    ::Swagger::setValue(&created_at, pJson["created_at"], "QString", "QString");
    
    ::Swagger::setValue(&volume, pJson["volume"], "QString", "QString");
    
    ::Swagger::setValue(&remaining_volume, pJson["remaining_volume"], "QString", "QString");
    
    ::Swagger::setValue(&reserved_fee, pJson["reserved_fee"], "QString", "QString");
    
    ::Swagger::setValue(&remaining_fee, pJson["remaining_fee"], "QString", "QString");
    
    ::Swagger::setValue(&paid_fee, pJson["paid_fee"], "QString", "QString");
    
    ::Swagger::setValue(&locked, pJson["locked"], "QString", "QString");
    
    ::Swagger::setValue(&executed_volume, pJson["executed_volume"], "QString", "QString");
    
    ::Swagger::setValue(&trades_count, pJson["trades_count"], "SWGNumber", "SWGNumber");
    
}

QString
SWGNewOrder::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGNewOrder::asJsonObject() {
    QJsonObject obj;
    if(uuid != nullptr && *uuid != QString("")){
        toJsonValue(QString("uuid"), uuid, obj, QString("QString"));
    }
    if(side != nullptr && *side != QString("")){
        toJsonValue(QString("side"), side, obj, QString("QString"));
    }
    if(ord_type != nullptr && *ord_type != QString("")){
        toJsonValue(QString("ord_type"), ord_type, obj, QString("QString"));
    }
    if(price != nullptr && *price != QString("")){
        toJsonValue(QString("price"), price, obj, QString("QString"));
    }
    if(avg_price != nullptr && *avg_price != QString("")){
        toJsonValue(QString("avg_price"), avg_price, obj, QString("QString"));
    }
    if(state != nullptr && *state != QString("")){
        toJsonValue(QString("state"), state, obj, QString("QString"));
    }
    if(market != nullptr && *market != QString("")){
        toJsonValue(QString("market"), market, obj, QString("QString"));
    }
    if(created_at != nullptr && *created_at != QString("")){
        toJsonValue(QString("created_at"), created_at, obj, QString("QString"));
    }
    if(volume != nullptr && *volume != QString("")){
        toJsonValue(QString("volume"), volume, obj, QString("QString"));
    }
    if(remaining_volume != nullptr && *remaining_volume != QString("")){
        toJsonValue(QString("remaining_volume"), remaining_volume, obj, QString("QString"));
    }
    if(reserved_fee != nullptr && *reserved_fee != QString("")){
        toJsonValue(QString("reserved_fee"), reserved_fee, obj, QString("QString"));
    }
    if(remaining_fee != nullptr && *remaining_fee != QString("")){
        toJsonValue(QString("remaining_fee"), remaining_fee, obj, QString("QString"));
    }
    if(paid_fee != nullptr && *paid_fee != QString("")){
        toJsonValue(QString("paid_fee"), paid_fee, obj, QString("QString"));
    }
    if(locked != nullptr && *locked != QString("")){
        toJsonValue(QString("locked"), locked, obj, QString("QString"));
    }
    if(executed_volume != nullptr && *executed_volume != QString("")){
        toJsonValue(QString("executed_volume"), executed_volume, obj, QString("QString"));
    }
    if((trades_count != nullptr) && (trades_count->isSet())){
        toJsonValue(QString("trades_count"), trades_count, obj, QString("SWGNumber"));
    }

    return obj;
}

QString*
SWGNewOrder::getUuid() {
    return uuid;
}
void
SWGNewOrder::setUuid(QString* uuid) {
    this->uuid = uuid;
    this->m_uuid_isSet = true;
}

QString*
SWGNewOrder::getSide() {
    return side;
}
void
SWGNewOrder::setSide(QString* side) {
    this->side = side;
    this->m_side_isSet = true;
}

QString*
SWGNewOrder::getOrdType() {
    return ord_type;
}
void
SWGNewOrder::setOrdType(QString* ord_type) {
    this->ord_type = ord_type;
    this->m_ord_type_isSet = true;
}

QString*
SWGNewOrder::getPrice() {
    return price;
}
void
SWGNewOrder::setPrice(QString* price) {
    this->price = price;
    this->m_price_isSet = true;
}

QString*
SWGNewOrder::getAvgPrice() {
    return avg_price;
}
void
SWGNewOrder::setAvgPrice(QString* avg_price) {
    this->avg_price = avg_price;
    this->m_avg_price_isSet = true;
}

QString*
SWGNewOrder::getState() {
    return state;
}
void
SWGNewOrder::setState(QString* state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
SWGNewOrder::getMarket() {
    return market;
}
void
SWGNewOrder::setMarket(QString* market) {
    this->market = market;
    this->m_market_isSet = true;
}

QString*
SWGNewOrder::getCreatedAt() {
    return created_at;
}
void
SWGNewOrder::setCreatedAt(QString* created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

QString*
SWGNewOrder::getVolume() {
    return volume;
}
void
SWGNewOrder::setVolume(QString* volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

QString*
SWGNewOrder::getRemainingVolume() {
    return remaining_volume;
}
void
SWGNewOrder::setRemainingVolume(QString* remaining_volume) {
    this->remaining_volume = remaining_volume;
    this->m_remaining_volume_isSet = true;
}

QString*
SWGNewOrder::getReservedFee() {
    return reserved_fee;
}
void
SWGNewOrder::setReservedFee(QString* reserved_fee) {
    this->reserved_fee = reserved_fee;
    this->m_reserved_fee_isSet = true;
}

QString*
SWGNewOrder::getRemainingFee() {
    return remaining_fee;
}
void
SWGNewOrder::setRemainingFee(QString* remaining_fee) {
    this->remaining_fee = remaining_fee;
    this->m_remaining_fee_isSet = true;
}

QString*
SWGNewOrder::getPaidFee() {
    return paid_fee;
}
void
SWGNewOrder::setPaidFee(QString* paid_fee) {
    this->paid_fee = paid_fee;
    this->m_paid_fee_isSet = true;
}

QString*
SWGNewOrder::getLocked() {
    return locked;
}
void
SWGNewOrder::setLocked(QString* locked) {
    this->locked = locked;
    this->m_locked_isSet = true;
}

QString*
SWGNewOrder::getExecutedVolume() {
    return executed_volume;
}
void
SWGNewOrder::setExecutedVolume(QString* executed_volume) {
    this->executed_volume = executed_volume;
    this->m_executed_volume_isSet = true;
}

SWGNumber*
SWGNewOrder::getTradesCount() {
    return trades_count;
}
void
SWGNewOrder::setTradesCount(SWGNumber* trades_count) {
    this->trades_count = trades_count;
    this->m_trades_count_isSet = true;
}


bool
SWGNewOrder::isSet(){
    bool isObjectUpdated = false;
    do{
        if(uuid != nullptr && *uuid != QString("")){ isObjectUpdated = true; break;}
        if(side != nullptr && *side != QString("")){ isObjectUpdated = true; break;}
        if(ord_type != nullptr && *ord_type != QString("")){ isObjectUpdated = true; break;}
        if(price != nullptr && *price != QString("")){ isObjectUpdated = true; break;}
        if(avg_price != nullptr && *avg_price != QString("")){ isObjectUpdated = true; break;}
        if(state != nullptr && *state != QString("")){ isObjectUpdated = true; break;}
        if(market != nullptr && *market != QString("")){ isObjectUpdated = true; break;}
        if(created_at != nullptr && *created_at != QString("")){ isObjectUpdated = true; break;}
        if(volume != nullptr && *volume != QString("")){ isObjectUpdated = true; break;}
        if(remaining_volume != nullptr && *remaining_volume != QString("")){ isObjectUpdated = true; break;}
        if(reserved_fee != nullptr && *reserved_fee != QString("")){ isObjectUpdated = true; break;}
        if(remaining_fee != nullptr && *remaining_fee != QString("")){ isObjectUpdated = true; break;}
        if(paid_fee != nullptr && *paid_fee != QString("")){ isObjectUpdated = true; break;}
        if(locked != nullptr && *locked != QString("")){ isObjectUpdated = true; break;}
        if(executed_volume != nullptr && *executed_volume != QString("")){ isObjectUpdated = true; break;}
        if(trades_count != nullptr && trades_count->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
