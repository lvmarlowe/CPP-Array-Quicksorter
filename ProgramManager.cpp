/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 9: Assignment
    26 Oct 2024
    This implementation file handles the program flow
    and displays information to the user in a clean,
    organized way. It requires ProgramManager.h to
    run.
-------------------------------------------------- */

#include "ProgramManager.h"
#include <iostream>
#include <iomanip> // For setw()

using namespace std;

const string ProgramManager::BORDER(72, '-'); // Creates border in a single step
const string ProgramManager::WORST_CASE_TIME = "O(n^2)";

// Runs the entire program when the object is created
ProgramManager::ProgramManager() {
    displayWelcome();
    displayArrays();
    displayExit();
}

ProgramManager::~ProgramManager() {}

// Adds proper spacing and borders to each line of text
void ProgramManager::displayLine(const string& message) {
    cout << "|" << setw(WIDTH) << left << " " + message << "|" << endl;
}

// Creates a box to separate different parts of the output
void ProgramManager::displayBorderedSection(const vector<string>& messages) {
    cout << BORDER << endl;
    for (const auto& message : messages) {
        displayLine(message);
    }
    cout << BORDER << endl;
}

void ProgramManager::displayWelcome() {
    displayBorderedSection({
        "Welcome to Array Sorter",
        "This program will create and sort an array",
        "of 250 random integers between 1 and 1,000,000."
        });
    cout << endl;
}

void ProgramManager::displayArrays() {
    displayBorderedSection({ "Original Array" });
    printer.print(arrayCreator);

    displayBorderedSection({ "Sorting Array..." });
    sorter.quickSort(arrayCreator.numbers, 0, ArrayCreator::SIZE - 1);

    displayBorderedSection({ "Sorted Array" });
    printer.print(arrayCreator);

    displayBorderedSection({
        "Big O Analysis",
        "Worst-case running time: " + WORST_CASE_TIME
        });
    cout << endl;
}

void ProgramManager::displayExit() {
    displayBorderedSection({
        "Thank you for using Array Sorter",
        "Goodbye!"
        });
}