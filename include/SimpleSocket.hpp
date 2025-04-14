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
  struct sockaddr_in address;
  int sock;
  int connection;

public:
  // Constructor
  SimpleSocket(int domain, int service, int protocol, int port,
               u_long interface);
  // Virtual function to connect to a network
  virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
  void test_connection(int item_to_test);
  // Getters
  inline struct sockaddr_in get_address() const { return address; }
  inline int get_sock() const { return sock; }
  inline int get_connection() const { return connection; }
  // Setters
  inline void set_connection(int value) { connection = value; }
};
} // namespace HDE
