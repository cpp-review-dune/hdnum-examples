#include <gmpxx.h>
#include <hdnum/src/vector.hh>

int main()
{
  mpf_set_default_prec(1024);
  hdnum::Vector<mpf_class> mx(2);
  std::cout << "mx=" << mx << std::endl;
  std::cout << mx.precision() << std::endl;
  return 0;
}
