/*  LV Marlowe
	SDEV-345: Data Structures & Algorithms
	Week 9: Assignment
	26 Oct 2024
	This header file defines the ArrayCreator class,
	which creates and stores an array of 250 random
	integers. It includes functions for generating
	and accessing the array.
-------------------------------------------------- */

#ifndef ARRAYCREATOR_H
#define ARRAYCREATOR_H

#include <array>

using namespace std;

class ArrayCreator {
public:
	ArrayCreator();
	~ArrayCreator();

	// Defines array size and range for random numbers
	static constexpr size_t SIZE = 250;
	static constexpr int MIN_VALUE = 1;
	static constexpr int MAX_VALUE = 1000000;

private:

	// Grants access to array data while maintaining encapsulation
	friend class ProgramManager;
	friend class Printer;
	friend class Sorter;

	array<int, SIZE> numbers{};
	void generateRandomNumbers();
};

#endif // ARRAYCREATOR_H

