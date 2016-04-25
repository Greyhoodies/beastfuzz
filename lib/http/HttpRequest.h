//
// Created by jubb on 25/04/16.
//



#ifndef BEASTFUZZ_HTTP_REQUEST_H
#define BEASTFUZZ_HTTP_REQUEST_H
#include <curl/curl.h>
#include "HttpUrl.h"

/**
 * An http Class for betterment of hacking JSON.
 */
class HttpRequest {
    CURL *curl;
    CURLcode res;
public:

};

static class HttpRequest::Builder {
    HttpRequest buildRequest;
public:

    HttpRequest url(HttpUrl url);
};


#endif //BEASTFUZZ_HTTP_REQUEST_H
