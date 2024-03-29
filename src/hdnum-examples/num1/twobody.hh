#include "nbody.hh"

/** @brief two bodies in 2d space

    \tparam T a type representing time values
    \tparam N a type representing states and f-values
*/
template <class T, class N = T> class TwoBody : public NBody<T, N, 2> {
public:
  /** \brief export size_type */
  typedef std::size_t size_type;

  /** \brief export time_type */
  typedef T time_type;

  /** \brief export number_type */
  typedef N number_type;

  // make a the two body model
  TwoBody() : NBody<T, N, 2>(2)
  {
    this->m[0] = 1;
    this->m[1] = 0.01;
    this->G = 1.0;
  }

  //! set initial state including time value
  void initialize(T &t0, hdnum::Vector<N> &x0) const
  {
    t0 = 0;

    x0[0] = -1;
    x0[1] = 0;
    x0[2] = 0;
    x0[3] = 0;

    x0[4] = 1;
    x0[5] = 0;
    x0[6] = 0;
    x0[7] = 0.2;
    NBody<T, N, 2>::normalize(x0);
  }
};
