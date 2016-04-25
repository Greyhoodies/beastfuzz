//
// Created by jubb on 25/04/16.
//

#ifndef BEASTFUZZ_HTTPURL_H
#define BEASTFUZZ_HTTPURL_H

//lmao this is okHttp now
class HttpUrl {
private:
    char* scheme;
    char* baseUrl;
    char** extensions;
public:
    HttpUrl(char* URL);
    static class Builder;
};

static class HttpUrl::Builder {
private:
    HttpUrl workingUrl;
    bool hasQueries = false;
    char** paths;
    char** queries;
public:
    HttpUrl::Builder scheme(char* scheme); // "http" / "https"
    HttpUrl::Builder host(char* host); // "www.jubb.io"
    HttpUrl::Builder addPathSegment(char* pathSegment); //result is + "/" +thing
    HttpUrl::Builder addQueryParameter(char* query, char* value); //result is +hasQueries?&:? + query=value
    HttpUrl build();
};

#endif //BEASTFUZZ_HTTPURL_H
