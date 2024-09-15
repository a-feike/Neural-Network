#include "Neuron.h"

// Constructor definition
Neuron::Neuron(){
    outputValue=10;

    for (int val : listOfWeightOut)
    {
        val=1;
    }
    
}

// Destructor definition
Neuron::~Neuron() { }

void Neuron::printNeuron() const{
    std::cout << outputValue << std::endl;
}

// overload print
std::ostream& operator<< (std::ostream & s, const Neuron& obj){
    s << "Neuron output value: " << obj.outputValue << std::endl;
    return s;
}
