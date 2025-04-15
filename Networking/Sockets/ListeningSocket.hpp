#pragma once

// lib

#include "BindingSocket.hpp"

namespace HDE {
class ListeningSocket : public BindingSocket {
private:
  int backlog;
  int listening;
public:
  // Constructor
  ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
  // Listening function
  void start_listening();
   
};
} // namespace HDE
