/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 9: Assignment
    26 Oct 2024
    This implementation file contains the QuickSort
    sorting method that puts the array numbers in
    ascending order by comparing numbers to a pivot
    point. It requires Sorter.h to run.
-------------------------------------------------- */

#include "Sorter.h"

Sorter::Sorter() {}

Sorter::~Sorter() {}

// Divide the array into smaller parts and sorts each part
void Sorter::quickSort(array<int, ArrayCreator::SIZE>& arr, int startIndex, int endIndex) {
    if (startIndex < endIndex) {
        int pivotIndex = partition(arr, startIndex, endIndex);
        quickSort(arr, startIndex, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, endIndex);
    }
}

// Moves smaller numbers to the left of the pivot point and larger ones to the right
int Sorter::partition(array<int, ArrayCreator::SIZE>& arr, int startIndex, int endIndex)
{
    int pivot = arr[endIndex];
    int smallerElementIndex = (startIndex - 1);

    for (int currentIndex = startIndex; currentIndex <= endIndex - 1; currentIndex++) {
        if (arr[currentIndex] < pivot) {
            smallerElementIndex++;
            swap(arr[smallerElementIndex], arr[currentIndex]);
        }
    }
    swap(arr[smallerElementIndex + 1], arr[endIndex]);
    return (smallerElementIndex + 1);
}
