set(num1_sources
  ecke
  eemodelproblem
  fem1d_linear
  fem1d_quadratic
  hodgkinhuxley
  iemodelproblem
  linearoscillator
  modelproblem_high_dim
  modelproblem_ordertest
  modelproblem_runge_kutta
  modelproblem
  nbody
  ordertest
  system_example
  vanderpol
)

foreach(loopVAR IN LISTS num1_sources)
    add_executable(${loopVAR} ${loopVAR}.cc)
endforeach()

target_link_libraries(modelproblem_high_dim gmp gmpxx)