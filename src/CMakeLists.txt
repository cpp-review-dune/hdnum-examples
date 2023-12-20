cmake_minimum_required(VERSION 3.28)
project(examples LANGUAGES CXX)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_LIST_DIR}/cmake
  ${CMAKE_MODULE_PATH}
)

add_subdirectory(examples)