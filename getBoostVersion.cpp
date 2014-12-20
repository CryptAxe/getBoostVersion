#include <boost/version.hpp>
#include <iostream>

using std::cout;

int main() {
  cout << "Boost version: " << BOOST_VERSION / 100000 << "_"
    << BOOST_VERSION / 100 % 1000 << "." << BOOST_VERSION % 100 << "\n";
}
