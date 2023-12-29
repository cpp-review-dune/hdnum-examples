#include <cmath>    // für sqrt
#include <iomanip>  // für setprecision
#include <iostream> // header für Ein-/Ausgabe

int main()
{
  double x(0.0);
  std::cout << "Gebe eine Zahl ein: ";
  std::cin >> x;
  std::cout << "Wurzel(x)= " << std::scientific << std::showpoint
            << std::setprecision(15) << sqrt(x) << std::endl;

  return 0;
}
