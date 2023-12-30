#!/usr/bin/env bash

clear
DIR=$(pwd)/build
if [ -d "$DIR" ]; then
  printf '%s\n' "Removing Lock ($DIR)"
  rm -rf "$DIR"
fi

clang-format --style=file -i src/*-examples/**/*.cc

cmake -S src \
  -B build \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER=g++ \
  -DCMAKE_CXX_STANDARD=20 \
  -DCMAKE_CXX_STANDARD_REQUIRED=True \
  -DCMAKE_CXX_FLAGS="-Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wno-maybe-uninitialized" \
  -Wno-dev

cmake --build build --parallel $nproc
