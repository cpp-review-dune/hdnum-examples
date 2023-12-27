#include <hdnum/src/timer.hh>
#include <iostream>

int main()
{
  hdnum::Timer T;
  for (unsigned int i = 0; i < 1000000000; i++) {
    ;
  }

  double time_elapse = T.elapsed();
  std::cout << time_elapse << std::endl;

  return 0;
}