#!/usr/bin/env bash

DIR=$(pwd)/build
if [ -d "$DIR" ]; then
  printf '%s\n' "Removing Lock ($DIR)"
  rm -rf "$DIR"
fi

clang-format --style=file -i src/examples/*.cc

cmake -S src -B build
cmake --build build
