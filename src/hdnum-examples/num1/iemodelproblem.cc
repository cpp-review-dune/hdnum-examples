#include <hdnum/src/ode.hh>
#include <hdnum/src/vector.hh>

int main()
{
  typedef double Number;
  typedef hdnum::Vector<Number> V;

  Number lambda = -10.0;
  Number dt = 0.25;
  Number time = 0.0;
  V u(1);
  u[0] = 1.0;

  std::vector<Number> times; // store time values here
  std::vector<V> states;     // store states here
  times.push_back(time);     // initial time
  states.push_back(u);       // initial state

  while (time < 5.0 - 1e-6) // the time loop
  {
    u[0] = u[0] / (1 - lambda * dt);
    time += dt;
    times.push_back(time); // save time
    states.push_back(u);   // and state
  }

  hdnum::gnuplot("iemp.dat", times, states); // output model result

  return 0;
}
