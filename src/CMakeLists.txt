cmake_minimum_required(VERSION 3.28)
project(examples LANGUAGES CXX)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_LIST_DIR}/cmake
  ${CMAKE_MODULE_PATH}
)

# https://stackoverflow.com/a/29309437/9302545
find_package(GMP REQUIRED)

add_subdirectory(doc-examples)
add_subdirectory(hdnum-examples)