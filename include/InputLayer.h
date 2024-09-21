// InputLayer.h
#pragma once
#include <iostream>

#include "Layer.h"

class InputLayer: public Layer
{
public:
    /**
     * @brief Constructs an InputLayer object with a specified number of neurons.
     *
     * This constructor initializes the InputLayer by calling the 
     * constructor of the base class `Layer` with the given number of 
     * neurons.
     *
     * @param N The number of neurons to create in this input layer.
     */
	InputLayer(const size_t & N); 

    /**
     * @brief Default destructor for the Layer class.
     *
     * This destructor is called when a Layer object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */  
	~InputLayer(){} 


    /**
     * @brief Overloads the output stream operator for InputLayer.
     *
     * This function prints a message indicating that the object is an 
     * InputLayer, followed by the details of the Layer object. 
     *
     * @param s The output stream to which the InputLayer object will be sent.
     * @param obj The InputLayer object to be printed.
     * @return A reference to the output stream after the InputLayer object has been added.
     */
    friend std::ostream& operator<< (std::ostream & s, const InputLayer & obj);


private:
};
