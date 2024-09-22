// HiddenLayer.cpp
#include"HiddenLayer.h"

// default constructor
HiddenLayer::HiddenLayer(){}


// overloaded constructor
HiddenLayer::HiddenLayer(const size_t & N) 
    : Layer(N)  // Call the constructor of Layer with N
{
    // Additional initialization specific to InputLayer can be done here
}

std::ostream& operator<< (std::ostream & s, const HiddenLayer & obj) {
    s << "This is a Hidden Layer" << std::endl; 
    s << static_cast<const Layer&>(obj); // Call the Layer's overloaded operator<<
    return s; 
}