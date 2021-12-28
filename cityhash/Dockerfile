# docker build -t pavelsr/cityhash64 .

FROM alpine:latest

RUN apk update && \
    apk add git g++ make

RUN git clone https://github.com/google/cityhash.git

RUN cd /cityhash && \
    ./configure && \
    make all check CXXFLAGS="-g -O3" && \
    make install

WORKDIR /app

COPY cityhash64.cpp ./

RUN g++ -I /usr/local/include/ -L/usr/local/lib cityhash64.cpp -o /usr/local/bin/cityhash64 -lcityhash

RUN rm cityhash64.cpp
