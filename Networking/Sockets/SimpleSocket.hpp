#pragma once

// std
#include <iostream>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>

namespace HDE {
class SimpleSocket {
private:
  int sock;
  struct sockaddr_in address;

  // Virtual function to connect to a network
  virtual void connect_to_network(int sock, struct sockaddr_in address) = 0;

public:
  // Constructor
  SimpleSocket(int domain, int service, int protocol, int port,
               u_long interface);
  // For testing connections or bindings
  void test_connection(int item_to_test, char *output);
  // Getters
  inline struct sockaddr_in get_address() const { return address; }
  inline int get_sock() const { return sock; }
};
} // namespace HDE
