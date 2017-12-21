#include <iostream>
#include <reyco/AppFactory.h>

namespace reyco {

void hello(const AppFactory::Argv &) { throw std::runtime_error{"Hello"}; }
}

int main(int argc, char *argv[]) {
  return reyco::AppFactory::make(reyco::hello, argc, argv);
}
