// InputLayer.cpp
#include "InputLayer.h"

InputLayer::InputLayer(const size_t & N) 
    : Layer(N)  // Call the constructor of Layer with N
{
    // Additional initialization specific to InputLayer can be done here
}

std::ostream& operator<< (std::ostream & s, const InputLayer & obj) {
    s << "This is an Input Layer" << std::endl; 
    s << static_cast<const Layer&>(obj); // Call the Layer's overloaded operator<<
    return s; 
}