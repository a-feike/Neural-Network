// Layer.h
#pragma once
#include <vector>
#include "Neuron.h"


class Layer
{
public:
    std::vector<Neuron> listOfNeuronsInLayer;   ///< Vector of neurons in the layer.
    size_t numberOfNeuronsInLayer;               ///< Number of neurons in the layer.

    /**
     * @brief Constructs a Layer object with a specified number of neurons.
     *
     * This constructor initializes the Layer with a given number of neurons, 
     * setting the `numberOfNeuronsInLayer` variable and creating a vector of 
     * `Neuron` objects. Each `Neuron` is default-constructed and added to 
     * the `listOfNeuronsInLayer`. 
     *
     * @param N The number of neurons to create in this layer.
     */
    Layer(const size_t & N);


    /**
     * @brief Default destructor for the Layer class.
     *
     * This destructor is called when a Layer object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */  
    ~Layer(){}

    /**
     * @brief Initializes the weights between the current layer and the next layer.
     *
     * This function sets the output weights of each neuron in the current layer. 
     * It also sets the input weights of each neuron in the next layer, ensuring
     * that out and in weight of one connection equal.
     * Random values are generated for the weights within the range [-0.1, 0.1].
     *
     * @param nextLayer A reference to the next layer of neurons. This parameter 
     *                  is used to determine the needed number of out weights for each neuron 
     *                  in the current layer and to set the corresponding input weights 
     *                  in the next layer.
     *
     * @note The weight vectors for the neurons are resized to accommodate the 
     *       number of neurons in the corresponding layer before weights are assigned.
     */
    void initWeights(Layer & nextLayer);


    /**
     * @brief Overloads the output stream operator for Layer.
     *
     * This function allows for easy printing of the Layer object to an output 
     * stream, such as `std::cout`. The friend declaration allows this function 
     * to access private and protected members of the Layer class.
     *
     * @param s The output stream to which the Layer object will be sent.
     * @param obj The Layer object to be printed.
     * @return A reference to the output stream after the Layer object has been added.
     */
    friend std::ostream& operator<< (std::ostream & s,const Layer & obj);


    
};


