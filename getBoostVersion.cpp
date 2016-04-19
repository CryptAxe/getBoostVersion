#include <boost/version.hpp>
#include <iostream>

int main() {
  std::cout << "Boost version: " << BOOST_VERSION / 100000 << "_"
    << BOOST_VERSION / 100 % 1000 << "." << BOOST_VERSION % 100 << "\n";
}
