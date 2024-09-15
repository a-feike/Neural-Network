#pragma once
#include <vector>
#include "Neuron.h"


class Layer
{
public:
    std::vector<Neuron> listOfNeurons;
    size_t numberOfNeuronInLayer;

    Layer(const size_t & N);

    ~Layer();

    // overload << operator
    // friend is not a member function but also has access to members of the class
    friend std::ostream& operator<< (std::ostream & s,const Layer & obj);


    
};


