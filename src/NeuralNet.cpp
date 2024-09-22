// NeuralNet.cpp
#include "NeuralNet.h"

// default constructor
NeuralNet::NeuralNet(){}

// Overloaded constructor definition
NeuralNet::NeuralNet(size_t numberOfInputNeurons, 
                    size_t numberOfHiddenLayer, 
                    size_t numberOfNeuronsInHiddenLayer, 
                    size_t numberOfOutputNeurons)
{
    initNet(numberOfInputNeurons, numberOfHiddenLayer, numberOfNeuronsInHiddenLayer, numberOfOutputNeurons);
}


// initialize NeuralNet with symmetric Hidden Layers
void NeuralNet::initNet(size_t numberOfInputNeurons, 
                        size_t numberOfHiddenLayer, 
                        size_t numberOfNeuronsInHiddenLayer, 
                        size_t numberOfOutputNeurons)
{    
    inputLayer.initLayer(numberOfInputNeurons);     // initialize input Layer
    outputLayer.initLayer(numberOfOutputNeurons);   // initialize output Layer

    for (size_t i = 0; i < numberOfHiddenLayer; i++)
    {
        HiddenLayer hiddenLayer(numberOfNeuronsInHiddenLayer);  // call overloaded HiddenLayer constructor
        listOfHiddenLayer.push_back(hiddenLayer);               // add hiddenLayer to listOfHiddenLayer
    }

    initNeuralNetWeights();     // initialize weights as well
}


// initialize weights in NeuralNet
void NeuralNet::initNeuralNetWeights()
{
    size_t j;
    if (listOfHiddenLayer.empty())  // if no Hidden Layers
        {    
            inputLayer.initWeights(outputLayer);
        }

        else    // if there are nonzero hidden Layers
        {
            inputLayer.initWeights(listOfHiddenLayer[0]); // init weights between input Layer and first hidden Layer
            for (size_t i = 0; i < listOfHiddenLayer.size()-1 ; i++)
            {
                listOfHiddenLayer[i].initWeights(listOfHiddenLayer[i+1]);   // init weights between hiddden Layers
                j=i+1; // to do initWeights with output Layer below
            }
            listOfHiddenLayer[j].initWeights(outputLayer);   // init weights between last hidden Layer and output Layer
        } 
}



// overload outstream operator
std::ostream& operator<< (std::ostream & s, const NeuralNet & obj) {
    s << "This is a Neural Net" << std::endl; 

    if (obj.listOfHiddenLayer.empty())  // if no Hidden Layers
        {    
            s << obj.inputLayer << obj.outputLayer;  // user overloaded operator for input and output layer
        }

    else    // if there are nonzero hidden Layers
        {
            s << obj.inputLayer ;  // user overloaded operator for input Layer
            
            for (size_t i = 0; i < obj.listOfHiddenLayer.size(); i++)
            {
                s << obj.listOfHiddenLayer[i] ;  // user overloaded operator for hidden Layer
            }
            
            s << obj.outputLayer; // user overloaded operator for output Layer
        } 

    return s;
}
