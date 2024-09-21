// Neuron.h
#pragma once
#include <vector>
#include <iostream>

class Neuron
{
public:
    std::vector<double> listOfWeightIn; ///< Input weights for the neuron.
                                        /// This vector holds the weights associated with the inputs to the neuron.

    std::vector<double> listOfWeightOut;    ///< Output weights of the neuron.
                                          /// This vector holds the weights associated with the outputs of the neuron.

    double bias;  ///< The bias of the neuron. 
                 /// This variable represents the bias added to the neuron's input.

    double outputValue; ///< The output value of the neuron. 
                        /// This variable holds the current output 
                        /// value calculated by the neuron.
    //double error;
    //double sensibility;

public:
    /**
     * @brief Constructs a Neuron object with randomized output value and bias.
     *
     * This constructor initializes the outputValue and bias of the Neuron 
     * using the `generateRealRandomValue` function, generating random 
     * floating-point values within the range of -0.1 to 0.1. 
     */
    Neuron(); 

    /**
     * @brief Default destructor for the Neuron class.
     *
     * This destructor is called when a Neuron object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */  
    ~Neuron(){}

    

    

    // overload << operator
    // friend is not a member function but also has access to members of the class
    friend std::ostream& operator<< (std::ostream & s,const Neuron & obj);

    //void printNeuron() const;
    // double initNeuron();



};


