#ifndef SORT_SORTINGALGORITHMS_H
#define SORT_SORTINGALGORITHMS_H

#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& input);

void radixSort(std::vector<int>& input);
void radixCount(std::vector<int>& input, int exp);

void selectionSort(std::vector<int>& input);

void insertionSort(std::vector<int>& input);

#endif //SORT_SORTINGALGORITHMS_H
