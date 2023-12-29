#include <hdnum/src/densematrix.hh>

int main()
{
  hdnum::DenseMatrix<double> A(2, 2, 1.0);
  hdnum::DenseMatrix<double> B(2, 2, -1.0);
  hdnum::DenseMatrix<double> D(2, 2);
  hdnum::DenseMatrix<double> E(2, 2);
  A.scientific(false);
  B.scientific(false);
  hdnum::DenseMatrix<double> C = A + B;

  std::cout << A << std::endl;
  std::cout << B << std::endl;
  std::cout << C << std::endl;
  std::cout << C(0, 0) << std::endl;
  C(1, 1) = 5.0;
  std::cout << C << std::endl;

  std::cout << A.precision() << std::endl;
  std::cout << C.colsize() << std::endl;
  D.mm(A, B);
  std::cout << D << std::endl;
  hdnum::Vector<double> x(2, 3.0), y(2);
  D.mv(y, x);
  std::cout << y << std::endl;

  E = A * B;
  E *= 10; // E = E * 10
  std::cout << E << std::endl;
  A(0, 0) = 1.0;
  A(0, 1) = 2.0;
  A(1, 0) = 3.0;
  A(1, 1) = 4.0;
  std::cout << A << std::endl;
  std::cout << A.transpose() << std::endl;

  hdnum::DenseMatrix<double> F(6, 6, 2.3);
  hdnum::identity(F);
  std::cout << F << std::endl;

  hdnum::DenseMatrix<double> G(6, 6, 2.3);
  hdnum::spd(G);
  std::cout << G << std::endl;

  return 0;
}