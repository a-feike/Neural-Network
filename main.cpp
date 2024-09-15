#include <iostream>
#include "Neuron.h"
#include "Layer.h"

int main() {

    std::cout << "Test Neuron" << std::endl;
    Neuron N1;
    std::cout << N1 << std::endl;
    N1.printNeuron();
    std::cout << "-------------------" << std::endl;

    std::cout << "Test Layer" << std::endl;
    std::cout << "Generate a Layer with 5 Neurons" << std::endl;
    Layer L1(5);
    std::cout << L1 << std::endl;
    std::cout << "-------------------" << std::endl;

    return 0;
}