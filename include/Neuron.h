#pragma once
//#include <stdlib.h>
#include <vector>
#include <iostream>

class Neuron
{
public:
    std::vector<double> listOfWeightIn;
    std::vector<double> listOfWeightOut;
    double outputValue;
    //double error;
    //double sensibility;

public:
    Neuron(); //Constructor
    ~Neuron(); //Destructor

    void printNeuron() const;

    // overload << operator
    // friend is not a member function but also has access to members of the class
    friend std::ostream& operator<< (std::ostream & s,const Neuron & obj);



};


