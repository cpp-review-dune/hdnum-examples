add_executable(matrices matrices.cc)
add_executable(vector vector.cc)
add_executable(gnuplot gnuplot.cc)
add_executable(timewatcher timewatcher.cc)

add_executable(multiprecision multiprecision.cc)
target_link_libraries(multiprecision gmp gmpxx)
