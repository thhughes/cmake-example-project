#include <iostream>
#include <string>
#include "class.hpp"


int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  std::cout << "The square root of " << inputValue << " is " << "idk man - I don't math"
            << std::endl;

  SampleClass bns; 
  bns.sqrt(inputValue);
  bns.speak();
  
  return 0;
}
