#include <iostream>
#include "Neuron.h"
#include "Layer.h"
#include "InputLayer.h"
#include "HiddenLayer.h"
#include "OutputLayer.h"
#include "NeuralNet.h"

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

    std::cout << "Test hiddenLayer" << std::endl;
    std::cout << "Generate an hidden Layer with 2 Neurons" << std::endl;
    HiddenLayer hiddenLayer1(2);
    std::cout << hiddenLayer1;
    std::cout << "----" << std::endl;
    std::cout << "Add 5 Neurons to hidden Layer" << std::endl;
    hiddenLayer1.addNeurons(5);
    std::cout << hiddenLayer1;
    std::cout << "----" << std::endl;
    std::cout << "Delete 2 Neurons from hidden Layer" << std::endl;
    hiddenLayer1.deleteNeurons(2);
    std::cout << hiddenLayer1;
    std::cout << "-------------------" << std::endl;

    std::cout << "Test outputLayer" << std::endl;
    std::cout << "Generate an output Layer with 2 Neurons" << std::endl;
    OutputLayer outputLayer1(2);
    std::cout << outputLayer1;
    std::cout << "-------------------" << std::endl;

    std::cout << "Test initWeights" << std::endl;
    inputLayer1.initWeights(hiddenLayer1);
    hiddenLayer1.initWeights(outputLayer1);
    std::cout << inputLayer1 ;
    std::cout << hiddenLayer1;
    std::cout << outputLayer1;

    std::cout << "-------------------" << std::endl;    
    std::cout << "Test Neural Net" << std::endl;
    NeuralNet NeuralNet1;  
    NeuralNet1.initNet(2,5,5,3); // #inputNeurons, #hiddenLayer, #hiddenLayer neurons, # outputNeurons
    std::cout << NeuralNet1;



    
    

    return 0;
}