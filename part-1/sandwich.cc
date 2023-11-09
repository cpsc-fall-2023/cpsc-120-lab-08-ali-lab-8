// Ali Gumus
// Aligumus@csu.fullerton.edu
// @Aeg1907
// Partners: @Aeg1907
//
// sandwich.cc
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4 || arguments.size() > 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "protein: " << protein << "\n";
  std::cout << "bread: " << bread << "\n";
  std::cout << "condiment: " << condiment << "\n";

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".";

  return 0;
}
