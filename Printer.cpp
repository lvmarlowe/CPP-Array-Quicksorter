/*  LV Marlowe
	SDEV-345: Data Structures & Algorithms
	Week 9: Assignment
	26 Oct 2024
	This implementation file contains the functions for
	the Printer class, which formats and displays array
	data in a clean, organized format. It requires 
	Printer.h to run.
-------------------------------------------------- */

#include "Printer.h"
#include <iostream>
#include <iomanip> // For setw()

using namespace std;

Printer::Printer() {}

Printer::~Printer() {}

// Displays give numbers per line with even spacing
void Printer::print(const ArrayCreator& arrayCreator) const {
	int count = 0;

	for (const auto& number : arrayCreator.numbers) {
		if (count % NUMBERS_PER_LINE == 0) {
			cout << "| ";
		}

		cout << setw(NUMBER_WIDTH) << right << number << " ";
		count++;

		if (count % NUMBERS_PER_LINE == 0) {
			cout << "|" << endl;
		}
	}
}
