#pragma once
#include <memory>
#include <string_view>
#include <vector>

namespace reyco {

class App;

struct AppFactory : std::unique_ptr<App> {
  using Argv = std::vector<std::string_view>;
  using EntryPoint = bool (*)(const Argv &);

  ~AppFactory();
  static AppFactory make(EntryPoint entryPoint, int argc, char *argv[]);
  operator int();
};
}

