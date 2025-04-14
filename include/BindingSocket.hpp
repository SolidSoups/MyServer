#pragma once

// libs
#include "SimpleSocket.hpp"

namespace HDE {
class BindingSocket : public SimpleSocket {
public:
  BindingSocket(int domain, int service, int protocol, int port,
                u_long interface);
  int connect_to_network(int sock, struct sockaddr_in address) override;
};
} // namespace HDE
