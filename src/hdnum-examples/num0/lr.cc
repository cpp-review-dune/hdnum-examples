#include <gmpxx.h>
#include <hdnum/src/densematrix.hh>
#include <hdnum/src/lr.hh>

const int n = 7;
typedef mpf_class number;

int main()
{
  mpf_set_default_prec(1024);

  hdnum::Vector<number> x(n);
  hdnum::Vector<number> b(n);
  hdnum::Vector<number> s(n);
  hdnum::Vector<std::size_t> p(n);
  hdnum::Vector<std::size_t> q(n);
  hdnum::DenseMatrix<number> A(n, n);
  hdnum::fill(x, number(1.0), number(1.0));
  hdnum::vandermonde(A, x);
  A.mv(b, x);
  hdnum::row_equilibrate(A, s);
  x = number(0.0);
  hdnum::lr_fullpivot(A, p, q);
  hdnum::apply_equilibrate(s, b);
  hdnum::permute_forward(p, b);
  hdnum::solveL(A, b, b);
  hdnum::solveR(A, x, b);
  hdnum::permute_backward(q, x);
  std::cout << x << std::endl;
}
