set(num0_sources
  corona
  ellipse
  integralgleichung
  lr_opcount
  lr
  matrizen
  precision
  qr_gram_schmidt
  vektoren
  wurzel
  wurzelbanach
)

foreach(loopVAR IN LISTS num0_sources)
    add_executable(${loopVAR} ${loopVAR}.cc)
endforeach()

target_link_libraries(integralgleichung gmp gmpxx)
target_link_libraries(lr gmp gmpxx)
target_link_libraries(wurzel gmp gmpxx)
target_link_libraries(wurzelbanach gmp gmpxx)