#include "Layer.h"

// Constructor definition
Layer::Layer(const size_t & N)
    : numberOfNeuronInLayer(N),        // Initialize numberOfNeuronInLayer
      listOfNeurons(N)                 // Initialize listOfNeurons with N elements
{
    for (size_t i = 0; i < N; i++)
    {
        listOfNeurons[i]=Neuron();
    }
    
}

// Destructor definition
Layer::~Layer() { }


// overload print
std::ostream& operator<< (std::ostream & s, const Layer& obj){
    for (const Neuron& N : obj.listOfNeurons)
    {
        s << N;
    }
    s << std::endl;

}