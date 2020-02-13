FROM alpine:3.1

LABEL maintainer "Pavel Serikov <pavelsr@cpan.org>"

RUN apk update && \ 
    apk add perl perl-dev g++ make wget curl libxml2-dev && \ 
    curl -L https://cpanmin.us | perl - App::cpanminus && \
    rm -rf /root/.cpanm/* /usr/local/share/man/* && \
    cpanm --verbose JSON::XS XML::XML2JSON

