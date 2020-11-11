#include <iostream>
#include <restinio/all.hpp>

int main() {

  restinio::run(
    restinio::on_thread_pool(4)
      .port(80)
      .address("localhost")
      .request_handler([](auto req) {
        return req->create_response().set_body("Hello, World!").done();
      }));
}
