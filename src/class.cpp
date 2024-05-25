
#include "class.hpp"
#include <iostream>


void SampleClass::speak() { 
    std::cout << "Bark: " << this->inp << " Bark Bark!" << std::endl;
}

void SampleClass::sqrt(const double x) { 
    inp = x;
}

int SampleClass::test() { 
    return 0;
}