#pragma once

// libs
#include "SimpleSocket.hpp"

namespace HDE {
class ConnectingSocket : public SimpleSocket {
private:
  int connection;
  // Definition for parent virtual function
  void connect_to_network(int sock, struct sockaddr_in address) override;

public:
  // Constructor
  ConnectingSocket(int domain, int service, int protocol, int port,
                   u_long interface);
  int get_connection() { return connection; }
};
} // namespace HDE
