#include <iostream>
#include "Neuron.h"
#include "Layer.h"
#include "InputLayer.h"

int main() {

    std::cout << "Test Neuron" << std::endl;
    Neuron Neuron1;
    std::cout << Neuron1 << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "Test Layer" << std::endl;
    std::cout << "Generate a Layer with 5 Neurons" << std::endl;
    Layer Layer1(5);
    Layer abc(5);
    std::cout << Layer1 ;
    std::cout << "-------------------" << std::endl;

    std::cout << "Test inputLayer" << std::endl;
    std::cout << "Generate an input Layer with 3 Neurons" << std::endl;
    InputLayer inputLayer1(3);
    std::cout << inputLayer1;
    std::cout << "-------------------" << std::endl;

    std::cout << "Test initWeights" << std::endl;
    std::cout << "Test"<< std::endl;
    Layer Layer2(2);
    std::cout << "Test";
    Layer Layer3(3);
    std::cout << "Test";
    Layer2.initWeights(Layer3);
    std::cout << Layer2 ;
    std::cout << Layer3 ;
    
    

    return 0;
}