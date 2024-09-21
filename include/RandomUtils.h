// RandomUtils.h
#pragma once    //include guard
#include <random>
/**
 * @brief Generates a real random value within a specified range.
 *
 * This function uses a random number generator to produce a random value
 * between the given minimum and maximum limits. The generated value can be
 * positive or negative, allowing for a flexible range suitable for various
 * applications.
 *
 * @param min The minimum value of the range (inclusive -> min is part of the range).
 * @param max The maximum value of the range (inclusive -> max is part of the range).
 * @return A random floating-point value between min and max.
 */
double generateRealRandomValue(double min, double max);