add_executable(corona corona.cc)
add_executable(ellipse ellipse.cc)

add_executable(integralgleichung integralgleichung.cc)
target_link_libraries(integralgleichung gmp gmpxx)

add_executable(lr_opcount lr_opcount.cc)
add_executable(lr lr.cc)
target_link_libraries(lr gmp gmpxx)

add_executable(matrizen matrizen.cc)
add_executable(precision precision.cc)
add_executable(qr_gram_schmidt qr_gram_schmidt.cc)
add_executable(vektoren vektoren.cc)
add_executable(wurzel wurzel.cc)
target_link_libraries(wurzel gmp gmpxx)

add_executable(wurzelbanach wurzelbanach.cc)
target_link_libraries(wurzelbanach gmp gmpxx)