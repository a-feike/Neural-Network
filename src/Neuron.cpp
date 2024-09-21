// Neuron.cpp
#include "Neuron.h"
#include "RandomUtils.h"

// Constructor definition
Neuron::Neuron(){
    outputValue = generateRealRandomValue(-0.1,0.1);
    bias        = generateRealRandomValue(-0.1,0.1);  
}


// void Neuron::printNeuron() const{
//     std::cout << outputValue << std::endl;
// }

// overload print
std::ostream& operator<< (std::ostream & s, const Neuron& obj){
    s << "Neuron bias: " << obj.bias << " output value: " << obj.outputValue;
    s << " WeightsIn=(";
    for (size_t i = 0; i < obj.listOfWeightIn.size(); i++)
    {
        s << obj.listOfWeightIn[i] << ", ";
    }
    s << ")" ;

        s << " WeightsOut=(";
    for (size_t i = 0; i < obj.listOfWeightOut.size(); i++)
    {
        s << obj.listOfWeightOut[i] << ", ";
    }
    s << ")" << std::endl;
    
    return s;
}
