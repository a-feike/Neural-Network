// OutputLayer.cpp
#include "OutputLayer.h"

// default constructor
OutputLayer::OutputLayer(){}



// overloaded constructor
OutputLayer::OutputLayer(const size_t & N) 
    : Layer(N)  // Call the constructor of Layer with N
{
    // Additional initialization specific to OutputLayer can be done here
}



std::ostream& operator<< (std::ostream & s, const OutputLayer & obj) {
    s << "This is an Output Layer" << std::endl; 
    s << static_cast<const Layer&>(obj); // Call the Layer's overloaded operator<<
    return s; 
}