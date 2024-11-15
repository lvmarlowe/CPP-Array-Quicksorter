#ifndef PROGRAMMANAGER_H
#define PROGRAMMANAGER_H

/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 9: Assignment
    26 Oct 2024
    This header file defines the ProgramManager class,
    which controls the overall program flow and user
    interface. It requires ArrayCreator.h, Printer.h,
    and Sorter.h to run.
-------------------------------------------------- */

#include "ArrayCreator.h"
#include "Printer.h"
#include "Sorter.h"
#include <string>
#include <vector>

using namespace std;

class ProgramManager {
public:
    ProgramManager();
    ~ProgramManager();

private:
    static const string BORDER;
    static const string WORST_CASE_TIME; // Shows the worst-case running time for the algorithm
    static constexpr int WIDTH = 71;
    ArrayCreator arrayCreator;
    Printer printer;
    Sorter sorter;
    void displayWelcome();
    void displayArrays();
    void displayExit();
    void displayLine(const string& message);
    void displayBorderedSection(const vector<string>& messages);
};

#endif // PROGRAMMANAGER_H

