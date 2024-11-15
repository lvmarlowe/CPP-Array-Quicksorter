/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 9: Assignment
    26 Oct 2024
    This implementation file contains the functions for
    the ArrayCreator class, which generates and stores
    random integers in the range of 1 to 1,000,000.
-------------------------------------------------- */

#include "ArrayCreator.h"
#include <random> // For default_random_engine and uniform_int_distribution
#include <ctime> // For time() to seed the random number generator

// Executes generator in constructor to eliminate need for separate method call
ArrayCreator::ArrayCreator() { generateRandomNumbers(); }

ArrayCreator::~ArrayCreator() {}

// Creates random numbers while avoiding repeating pattern
void ArrayCreator::generateRandomNumbers() {
	static default_random_engine generator(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

	for (size_t i = 0; i < SIZE; i++) {
		numbers[i] = distribution(generator);
	}
}
