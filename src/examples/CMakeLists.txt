add_executable(matrices matrices.cc)
add_executable(vector vector.cc)
add_executable(gnuplot gnuplot.cc)
add_executable(timewatcher timewatcher.cc)

find_package(GMP REQUIRED)
add_executable(multiprecision multiprecision.cc)
# https://stackoverflow.com/a/29309437/9302545
target_link_libraries(multiprecision gmp gmpxx)
