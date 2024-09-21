// RandomUtils.cpp
#include "RandomUtils.h"

double generateRealRandomValue(double min, double max) {
    std::random_device rd;                                      // seed random number generator
    std::mt19937 eng(rd());                                     // Mersenne Twister Engine for pseudo-random number
    std::uniform_real_distribution<double> distr(min, max);     // distribution: define range
    return distr(eng);                                          // call distribution with generator engine
}