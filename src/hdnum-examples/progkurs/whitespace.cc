#include <cmath>
#include <iomanip>
#include <iostream> // includes auf eigener Zeile!

int main()
{
  double x(0.0);
  std::cout << "Gebe eine lange Zahl ein: ";
  std::cin >> x;
  std::cout << "Wurzel(x)= " << std::scientific << std::showpoint
            << std::setprecision(16) << sqrt(x) << std::endl;

  return 0;
}
