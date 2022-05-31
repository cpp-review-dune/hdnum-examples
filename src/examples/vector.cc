#include <complex>
#include <hdnum/src/vector.hh>

using namespace std::complex_literals;
const double PI = std::acos(-1);

int main()
{
  hdnum::Vector<double> x(4);
  hdnum::unitvector(x, 2);
  std::cout << "x=" << x << std::endl
            << "||x||=" << x.two_norm() << std::endl;

  x.resize(x.size() / 2);
  std::cout << x << std::endl;
  std::cout << x.sub(0, 1) << std::endl;

  hdnum::Vector<std::complex<double>> y(6, PI + 1i * PI);
  hdnum::Vector<std::complex<double>> z(y);
  z = 10 * PI + 50i * PI;

  std::cout << "y=" << y << std::endl
            << "z=" << z << std::endl;

  std::cout << "z precision is " << z.precision() << "." << std::endl;
  z.precision(20);
  std::cout << z << std::endl;

  return 0;
}