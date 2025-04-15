#include "BindingSocket.hpp"

// Constructor
HDE::BindingSocket::BindingSocket(int domain, int service, int protocol,
                                  int port, u_long interface)
    : SimpleSocket(domain, service, protocol, port, interface) {
  connect_to_network(get_sock(), get_address());
}

// Definition of parent virtual function that binds to a network
void HDE::BindingSocket::connect_to_network(int sock,
                                            struct sockaddr_in address) {
  binding = bind(sock, (struct sockaddr *)&address, sizeof(address));
  test_connection(binding, "binding failed!");
}
