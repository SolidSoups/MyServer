#pragma once

// libs
#include "SimpleSocket.hpp"

namespace HDE {
class BindingSocket : public SimpleSocket {
private:
  int binding;

  // Definition for parent virtual function
  void connect_to_network(int sock, struct sockaddr_in address) override;

public:
  // Constructor
  BindingSocket(int domain, int service, int protocol, int port,
                u_long interface);
  int get_binding() { return binding; }
};
} // namespace HDE
