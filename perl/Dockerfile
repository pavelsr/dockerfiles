FROM perl:5.34-slim-buster

LABEL maintainer "Pavel Serikov <pavelsr@cpan.org>"

RUN apt-get update && \
    apt-get install -y gcc libz-dev libssl-dev curl iputils-ping jq nano procps

RUN curl -fsSL https://git.io/cpm -o /usr/local/bin/cpm && \
    chmod +x /usr/local/bin/cpm

RUN cpm install -gv IO::Socket::SSL LWP::Protocol::https && \
    rm -rf /root/.perl-cpm
