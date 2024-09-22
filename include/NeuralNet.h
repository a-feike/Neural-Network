// NeuralNet.cpp
#pragma once
#include "InputLayer.h"
#include "HiddenLayer.h"
#include "OutputLayer.h"


class NeuralNet
{
private:
    
public:
    InputLayer inputLayer;      ///< Relevant InputLayer in the NeuralNet.     
    OutputLayer outputLayer;    ///< Relevant OutputLayer in the NeuralNet.

    size_t numberOfHiddenLayers;                    ///< Number of HiddenLayer in the NeuralNet.   
    std::vector<HiddenLayer> listOfHiddenLayer;     ///< Vector of HiddenLayer in the NeuralNet.

    /**
     * @brief Default constructor for the NeuralNet class.
     * 
     * Initializes a NeuralNet object with default settings.
     */
    NeuralNet();


    /**
     * @brief Constructs a NeuralNet object with a specified number of hidden Layers and a 
     * specified number of neurons in input, output, and hidden layers.
     *
     * This function sets up the NeuralNet by initializing the input layer,
     * output layer, and a specified number of hidden layers. Each hidden 
     * layer is initialized with the same number of neurons. This can be 
     * changed by using the addNeurons and delteNeurons functions.
     * 
     * This overloaded constructor is basically just a shortcut for using first the
     * default constructor and then apply initNet.
     * 
     * 
     * @param numberOfInputNeurons The number of neurons in the input layer.
     * @param numberOfHiddenLayer The number of hidden layers to create.
     * @param numberOfNeuronsInHiddenLayer The number of neurons in each hidden layer.
     * @param numberOfOutputNeurons The number of neurons in the output layer.
     * 
     * @see initNet(size_t numberOfInputNeurons, 
                 size_t numberOfHiddenLayer, 
                 size_t numberOfNeuronsInHiddenLayer, 
                 size_t numberOfOutputNeurons);
     */
    NeuralNet(size_t numberOfInputNeurons, 
              size_t numberOfHiddenLayer, 
              size_t numberOfNeuronsInHiddenLayer, 
              size_t numberOfOutputNeurons);


    /**
     * @brief Default destructor for the NeuralNet class.
     *
     * This destructor is called when an NeuralNet object is destroyed. 
     * It does not perform any specific actions, as there are no dynamically
     * allocated resources to clean up in this class.
     */     
    ~NeuralNet(){};


    /**
     * @brief Initializes the NeuralNet with specified layers.
     * 
     * This function sets up the NeuralNet by initializing the input layer,
     * output layer, and a specified number of hidden layers. Each hidden 
     * layer is initialized with the same number of neurons. This can be 
     * changed by using the addNeurons and delteNeurons functions.
     * 
     * The relevant incoming and outgoing weights are also initialized by 
     * calling initNeuralNetWeights. If the number of neurons change in a
     * later step, initNeuralNetWeights must be called again.
     * 
     * @param numberOfInputNeurons The number of neurons in the input layer.
     * @param numberOfHiddenLayer The number of hidden layers to create.
     * @param numberOfNeuronsInHiddenLayer The number of neurons in each hidden layer.
     * @param numberOfOutputNeurons The number of neurons in the output layer.
     * 
     * @see initNeuralNetWeights()
     * @see Layer::addNeurons(const size_t & numberOfAddedNeurons)
     * @see Layer::deleteNeurons(const size_t & numberOfDeletedNeurons)
     */
    void initNet(size_t numberOfInputNeurons, 
                 size_t numberOfHiddenLayer, 
                 size_t numberOfNeuronsInHiddenLayer, 
                 size_t numberOfOutputNeurons);



    /**
     * @brief Initializes the weights of the neural network layers.
     * 
     * This function sets the weights between the input layer, hidden layers, 
     * and output layer using the Layer::initWeights function. If there are no 
     * hidden layers, it initializes the weights directly between the input 
     * layer and output layer. If hidden layers exist, it initializes the weights 
     * between each adjacent layer (input to first hidden, between hidden layers,
     *  and last hidden to output).
     * 
     * @see Layer::initWeights(Layer & nextLayer)
     */
    void initNeuralNetWeights();



    /**
     * @brief Overloads the output stream operator for NeuralNet.
     *
     * This function allows for easy printing of the NeuralNet object to an output 
     * stream, such as `std::cout`. The friend declaration allows this function 
     * to access private and protected members of the Layer class.
     *
     * @param s The output stream to which the NeuralNet object will be sent.
     * @param obj The NeuralNet object to be printed.
     * @return A reference to the output stream after the NeuralNet object has been added.
     */
    friend std::ostream& operator<< (std::ostream & s,const NeuralNet & obj);





    // NeuralNet trainNet(NeuralNet& n);

    // void printNet(NeuralNet& n);
    // void printTrainedNetResult(NeuralNet& n);

    // std::vector<std::vector<double>> trainSet;
    // std::vector<double> realOutputSet;
    // std::vector<std::vector<double>> realMatrixOutputSet;

    // int maxEpochs;
    // double learningRate; //0.2-0.5
    // double targetError; // 0.0001
    // double trainingError;
    // double errorMean;

    // std::vector<double> listOfMSE;
    // ActivationFncENUM activationFnc;
    // ActivationFncENUM activationFncOutputLayer;
    // TrainingTypesENUM trainType;
  
};

