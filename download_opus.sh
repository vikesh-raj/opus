#!/bin/bash -xe

mkdir -p $(dirname $0)/downloads
mkdir -p $(dirname $0)/deps

cd downloads

OGG_VERSION=1.3.5
OPUS_VERSION=1.5.2
OPUSFILE_VERSION=0.12

OGG_URL=http://downloads.xiph.org/releases/ogg/libogg-${OGG_VERSION}.tar.gz
OPUS_URL=http://downloads.xiph.org/releases/opus/opus-${OPUS_VERSION}.tar.gz
OPUSFILE_URL=http://downloads.xiph.org/releases/opus/opusfile-${OPUSFILE_VERSION}.tar.gz


if [[ ! -f opus-${OPUS_VERSION}.tar.gz ]]; then
    wget $OPUS_URL
fi

if [[ ! -f libogg-${OGG_VERSION}.tar.gz ]]; then
    wget $OGG_URL
fi

if [[ ! -f opusfile-${OPUSFILE_VERSION}.tar.gz ]]; then
    wget $OPUSFILE_URL
fi


if [[ ! -d ../deps/opus-${OPUS_VERSION} ]]; then
    tar -zxvf opus-${OPUS_VERSION}.tar.gz -C ../deps
fi

if [[ ! -d ../deps/libogg-${OGG_VERSION} ]]; then
    tar -zxvf libogg-${OGG_VERSION}.tar.gz -C ../deps
fi

if [[ ! -d ../deps/opusfile-${OPUSFILE_VERSION} ]]; then
    tar -zxvf opusfile-${OPUSFILE_VERSION}.tar.gz -C ../deps
fi
