/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 9: Assignment
    26 Oct 2024
    This header file defines the Sorter class,
    which sorts array contents in ascending order.
-------------------------------------------------- */

#ifndef SORTER_H
#define SORTER_H

#include "ArrayCreator.h"
#include <string>

using namespace std;

class Sorter {
public:
	Sorter();
	~Sorter();

private:
	void quickSort(array<int, ArrayCreator::SIZE>& arr, int startIndex, int endIndex);
	int partition(array<int, ArrayCreator::SIZE>& arr, int startIndex, int endIndex);
	friend class ProgramManager;
};

#endif // SORTER_H

