/*  LV Marlowe
	SDEV-345: Data Structures & Algorithms
	Week 9: Assignment
	26 Oct 2024
	This header file defines the Printer class,
	which displays the array in a clean, organized
	format. It requires ArrayCreator.h to run.
-------------------------------------------------- */

#ifndef PRINTER_H
#define PRINTER_H

#include "ArrayCreator.h"

class Printer {
public:
	Printer();
	~Printer();

private:
	static constexpr int NUMBERS_PER_LINE = 5;
	static constexpr int NUMBER_WIDTH = 10;
	void print(const ArrayCreator& arrayCreator) const;

	// Grants access to print the array while maintaining encapsulation
	friend class ProgramManager;
};

#endif // PRINTER_H

