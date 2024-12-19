#!/bin/bash -xe

# Adapted from https://gist.github.com/spvkgn/60c12010d4cae1243dfee45b0821f692

BUILD_DIR=$(dirname $0)/build
mkdir -p $BUILD_DIR
BUILD_DIR=$(realpath $BUILD_DIR)

export PKG_CONFIG_PATH="$BUILD_DIR/lib/pkgconfig"
export CFLAGS="-O3 -fno-strict-aliasing -march=native"

cd $(dirname $0)/deps

( cd opus-*/ && ./configure --prefix=$BUILD_DIR \
    --disable-shared --enable-static \
    --disable-dependency-tracking \
    --disable-maintainer-mode \
    --disable-doc \
    --disable-extra-programs && \
  make -j6 install )

( cd libogg-*/ && ./configure --prefix=$BUILD_DIR \
    --disable-shared --enable-static \
    --disable-dependency-tracking && \
  make -j6 install )

export DEPS_CFLAGS="-I$BUILD_DIR/include -I$BUILD_DIR/include/opus"
export DEPS_LIBS="-L$BUILD_DIR/lib"

(cd opusfile-*/ && ./configure --prefix=$BUILD_DIR \
    --disable-shared --enable-static \
    --disable-dependency-tracking \
    --disable-maintainer-mode \
    --disable-examples \
    --disable-doc \
    --disable-http && \
  make -j6 install )
