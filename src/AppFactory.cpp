#include <reyco/AppFactory.h>

namespace reyco {

class App {
public:
  using Argv = std::vector<std::string_view>;
  using EntryPoint = bool (*)(const Argv &);
  App(EntryPoint entryPoint, const Argv &argv)
      : entryPoint(entryPoint), argv(argv) {
    try {
      while (entryPoint(argv))
        ;
    } catch (...) {
      throw;
    }
  }

  const EntryPoint entryPoint;
  const Argv &argv;
};

AppFactory::~AppFactory() = default;

AppFactory AppFactory::make(App::EntryPoint entryPoint, int argc,
                            char *argv[]) {
  App::Argv argvView(argv, argv + argc);
  return AppFactory{std::make_unique<App>(entryPoint, argvView)};
}

AppFactory::operator int() { return 0; }
}
