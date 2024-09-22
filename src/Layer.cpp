// Layer.cpp
#include "Layer.h"
#include "RandomUtils.h"


// default constructor
Layer::Layer(){}

// Overloaded constructor definition
Layer::Layer(const size_t & N)
{
    initLayer(N);
}


// Initialize Layer
void Layer::initLayer(const size_t & N)
{
    numberOfNeuronsInLayer = N; 
    for (size_t i = 0; i < numberOfNeuronsInLayer; i++)
    {
        Neuron neuron; // call constructor: creating an object neuron of class Neuron
        listOfNeuronsInLayer.push_back(neuron); // add neuron to listOfNeuronsInLayer
    }   
}


// add neurons to layer
void Layer::addNeurons(const size_t & numberOfAddedNeurons)
{
    for (size_t i = 0; i < numberOfAddedNeurons; i++)
    {
        Neuron neuron; // call constructor: creating an object neuron of class Neuron
        listOfNeuronsInLayer.push_back(neuron); // add neuron to the end of listOfNeuronsInLayer
    }   
}

// delete neurons from layer
void Layer::deleteNeurons(const size_t & numberOfDeletedNeurons){
    for (size_t i = 0; i < numberOfDeletedNeurons; i++)
    {
        if (!listOfNeuronsInLayer.empty()) {    //check that list is not empty
            listOfNeuronsInLayer.pop_back();    // delete last neuron
        }

        else{
            break;  // Exit the loop 
        } 
    }  
}


void Layer::initWeights(Layer & nextLayer){
    double rand; // variable for random values
    for (size_t i = 0; i < numberOfNeuronsInLayer; ++i) {
        Neuron& neuronInCurrentLayer = listOfNeuronsInLayer[i];                         // Access neuron of current layer by index i
        neuronInCurrentLayer.listOfWeightOut.resize(nextLayer.numberOfNeuronsInLayer);  // resize vector, i.e. set number of elements
                                                                                        // number of weights out in current layer = number of neurons in in next layer
        
        for (Neuron& neuronInNextLayer : nextLayer.listOfNeuronsInLayer){               // loop over neurons in next layer
            neuronInNextLayer.listOfWeightIn.resize(numberOfNeuronsInLayer);            // resize vector, i.e. set number of elements
        }                                                                               // number of weights in  in next layer= number of neurons out in current layer

        for (size_t j = 0; j < nextLayer.numberOfNeuronsInLayer; j++)
        {
            Neuron& neuronInNextLayer = nextLayer.listOfNeuronsInLayer[j];  // Access neuron of next layer by index j

            rand = generateRealRandomValue(-0.1,0.1);               // generate random value
            neuronInCurrentLayer.listOfWeightOut[j] = rand;         // set output weight of neuron i of currentLayer connecting to neuron j of nextLayer
            neuronInNextLayer.listOfWeightIn[i] = rand ;            // copy weight to input of neuron j of next Layer connected to neuron i of currentLayer
         }
        
    }
}



// overload print
std::ostream& operator<< (std::ostream & s, const Layer& obj){
    s << "numberOfNeuronsInLayer=" << obj.numberOfNeuronsInLayer << std::endl;
    for (const Neuron& N : obj.listOfNeuronsInLayer)
    {
        s << N;
    }
    s << std::endl;
    return s;
}