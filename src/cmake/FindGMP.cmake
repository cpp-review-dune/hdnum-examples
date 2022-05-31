# https://www.reddit.com/r/cmake/comments/4qozat/comment/d53gs3q/?utm_source=share&utm_medium=web2x&context=3
find_path(GMP_INCLUDE_DIRS NAMES gmp.h)
find_library(GMP_LIBRARY NAMES gmp libgmp)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GMP DEFAULT_MSG
  GMP_INCLUDE_DIRS
  GMP_LIBRARY)
mark_as_advanced(GMP_INCLUDE_DIRS GMP_LIBRARY)