#include <iostream>
#include "Networking/Servers/TestServer.hpp"
#include "hdelibc.hpp"

int main() {
  std::cout << "Hello World!" << std::endl;

  HDE::TestServer newServer;
  return 0;
}
