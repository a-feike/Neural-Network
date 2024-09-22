// HiddenLayer.h
#pragma once
#include "Layer.h"
// #include "InputLayer.h"
// #include "OutputLayer.h"

class HiddenLayer: public Layer
{
private:


    
public:
    /**
     * @brief Default constructor for the HiddenLayer class.
     * 
     * Initializes a new HiddenLayer object with default settings.
     */
    HiddenLayer();

    /**
     * @brief Constructs a HiddenLayer object with a specified number of neurons.
     *
     * This constructor initializes the HiddenLayer by calling the 
     * constructor of the base class `Layer` with the given number of 
     * neurons.
     *
     * @param N The number of neurons to create in this hidden layer.
     * @see Layer::Layer(const size_t & N)
     */
	HiddenLayer(const size_t & N); 


    /**
     * @brief Default destructor for the HiddenLayer class.
     *
     * This destructor is called when a HiddenLayer object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */  
    ~HiddenLayer(){}

    /**
     * @brief Overloads the output stream operator for HiddenLayer.
     *
     * This function prints a message indicating that the object is a 
     * HiddenLayer, followed by the details of the Layer object. 
     *
     * @param s The output stream to which the HiddenLayer object will be sent.
     * @param obj The HiddenLayer object to be printed.
     * @return A reference to the output stream after the HiddenLayer object has been added.
     */
    friend std::ostream& operator<< (std::ostream & s, const HiddenLayer & obj);


};



