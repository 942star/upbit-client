# Upbit Open API
#
# ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
#
# OpenAPI spec version: 1.0.0
# Contact: ujhin942@gmail.com
# Generated by: https://github.com/swagger-api/swagger-codegen.git

#' @title Candle operations
#' @description swagger.Candle
#'
#' @field path Stores url path of the request.
#' @field apiClient Handles the client-server communication.
#' @field userAgent Set the user agent of the request.
#'
#' @importFrom R6 R6Class
#'
#' @section Methods:
#' \describe{
#'
#' candle_days 시세 캔들 조회 (일 단위)
#'
#'
#' candle_minutes 시세 캔들 조회 (분 단위)
#'
#'
#' candle_month 시세 캔들 조회 (월 단위)
#'
#'
#' candle_weeks 시세 캔들 조회 (주 단위)
#'
#' }
#'
#' @export
CandleApi <- R6::R6Class(
  'CandleApi',
  public = list(
    userAgent = "Swagger-Codegen/1.0.0/r",
    apiClient = NULL,
    initialize = function(apiClient){
      if (!missing(apiClient)) {
        self$apiClient <- apiClient
      }
      else {
        self$apiClient <- ApiClient$new()
      }
    },
    candle_days = function(market, to, count, converting_price_unit, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- character()

      if (!missing(`market`)) {
        queryParams['market'] <- market
      }

      if (!missing(`to`)) {
        queryParams['to'] <- to
      }

      if (!missing(`count`)) {
        queryParams['count'] <- count
      }

      if (!missing(`converting_price_unit`)) {
        queryParams['convertingPriceUnit'] <- converting_price_unit
      }

      urlPath <- "/candles/days"
      resp <- self$apiClient$callApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)
      
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        returnObject <- TODO_OBJECT_MAPPING$new()
        result <- returnObject$fromJSON(httr::content(resp, "text", encoding = "UTF-8"))
        Response$new(returnObject, resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        Response$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        Response$new("API server error", resp)
      }

    },
    candle_minutes = function(unit, market, to, count, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- character()

      if (!missing(`market`)) {
        queryParams['market'] <- market
      }

      if (!missing(`to`)) {
        queryParams['to'] <- to
      }

      if (!missing(`count`)) {
        queryParams['count'] <- count
      }

      urlPath <- "/candles/minutes/{unit}"
      if (!missing(`unit`)) {
        urlPath <- gsub(paste0("\\{", "unit", "\\}"), `unit`, urlPath)
      }

      resp <- self$apiClient$callApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)
      
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        returnObject <- TODO_OBJECT_MAPPING$new()
        result <- returnObject$fromJSON(httr::content(resp, "text", encoding = "UTF-8"))
        Response$new(returnObject, resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        Response$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        Response$new("API server error", resp)
      }

    },
    candle_month = function(market, to, count, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- character()

      if (!missing(`market`)) {
        queryParams['market'] <- market
      }

      if (!missing(`to`)) {
        queryParams['to'] <- to
      }

      if (!missing(`count`)) {
        queryParams['count'] <- count
      }

      urlPath <- "/candles/months"
      resp <- self$apiClient$callApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)
      
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        returnObject <- TODO_OBJECT_MAPPING$new()
        result <- returnObject$fromJSON(httr::content(resp, "text", encoding = "UTF-8"))
        Response$new(returnObject, resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        Response$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        Response$new("API server error", resp)
      }

    },
    candle_weeks = function(market, to, count, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- character()

      if (!missing(`market`)) {
        queryParams['market'] <- market
      }

      if (!missing(`to`)) {
        queryParams['to'] <- to
      }

      if (!missing(`count`)) {
        queryParams['count'] <- count
      }

      urlPath <- "/candles/weeks"
      resp <- self$apiClient$callApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)
      
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        returnObject <- TODO_OBJECT_MAPPING$new()
        result <- returnObject$fromJSON(httr::content(resp, "text", encoding = "UTF-8"))
        Response$new(returnObject, resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        Response$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        Response$new("API server error", resp)
      }

    }
  )
)