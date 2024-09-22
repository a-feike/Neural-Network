// OutputLayer.h
#pragma once
#include <iostream>

#include "Layer.h"

class OutputLayer: public Layer
{
public:
    /**
     * @brief Default constructor for the OutputLayer class.
     * 
     * Initializes a new OutputLayer object with default settings.
     */
    OutputLayer();

    /**
     * @brief Constructs an OutputLayer object with a specified number of neurons.
     *
     * This constructor initializes the OutputLayer by calling the 
     * constructor of the base class `Layer` with the given number of 
     * neurons.
     *
     * @param N The number of neurons to create in this output layer.
     * @see Layer::Layer(const size_t & N)
     */
	OutputLayer(const size_t & N); 

    /**
     * @brief Default destructor for the OutputLayer class.
     *
     * This destructor is called when an OutputLayer object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */  
	~OutputLayer(){} 


    /**
     * @brief Overloads the output stream operator for OutputLayer.
     *
     * This function prints a message indicating that the object is an 
     * OutputLayer, followed by the details of the Layer object. 
     *
     * @param s The output stream to which the OutputLayer object will be sent.
     * @param obj The OutputLayer object to be printed.
     * @return A reference to the output stream after the OutputLayer object has been added.
     */
    friend std::ostream& operator<< (std::ostream & s, const OutputLayer & obj);


private:
};
