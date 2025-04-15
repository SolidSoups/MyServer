#pragma once

// libs
#include "../Sockets/hdelibc-sockets.hpp"

namespace HDE {
class SimpleServer {
private:
  ListeningSocket *socket;

protected:
  virtual void accepter() = 0;
  virtual void handler() = 0;
  virtual void responder() = 0;

public:
  SimpleServer(int domain, int service, int protocol, int port,
               u_long interface, int bklg);
  virtual void launch() = 0;

  // Getters
  ListeningSocket *get_socket() { return socket; }
};
} // namespace HDE
