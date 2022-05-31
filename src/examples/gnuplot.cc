#include <hdnum/src/vector.hh>

int main()
{

  const double PI = std::acos(-1);
  hdnum::Vector<double> x(1);
  x = PI;
  x.scientific(false);
  hdnum::gnuplot("test.dat", x);

  hdnum::readVectorFromFile("test.dat", x);
  std::cout << "x=" << x << std::endl;

  return 0;
}