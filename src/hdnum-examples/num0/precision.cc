// precision.cc (Dateiname als Kommentar)
#include <hdnum/src/precision.hh>
// #include <iomanip>  // für setprecision etc.
#include <iostream> // notwendig zur Ausgabe

int main()
{
  float eps_float;
  int i_float = hdnum::precision(eps_float);
  std::cout << "float: "
            << "2^-" << i_float << std::endl;
  double eps_double;
  int i_double = hdnum::precision(eps_double);
  std::cout << "double: "
            << "2^-" << i_double << std::endl;
}
