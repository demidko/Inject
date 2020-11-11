#include <iostream>
#include <restinio/all.hpp>

int main(int argc, char **args) {
  if (argc != 1) throw std::runtime_error("Usage: ");
  auto port = std::stoi(args[0]);
  restinio::run(
    restinio::on_thread_pool(4)
      .port(port)
      .address("localhost")
      .request_handler([](auto req) {
        return req->create_response().set_body("Hello, World!").done();
      }));
}