#pragma once

// libs
#include "SimpleServer.hpp"

// std
#include <iostream>
#include <unistd.h>

namespace HDE {
class TestServer : public SimpleServer {
private:
  char buffer[30000] = {0};
  int new_socket;

protected:
  void accepter();
  void handler();
  void responder();

public:
  TestServer();
  void launch();
};
} // namespace HDE
