set(doc_sources
  matrices
  vector
  gnuplot
  timewatcher
  multiprecision)

foreach(loopVAR IN LISTS doc_sources)
    add_executable(${loopVAR} ${loopVAR}.cc)
endforeach()

target_link_libraries(multiprecision gmp gmpxx)