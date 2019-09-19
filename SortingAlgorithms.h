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

void merge(std::vector<int>& input, int left, int middle, int right);
void mergeSort(std::vector<int>& input, int left, int right);

int partition(std::vector<int>& input, int low, int high);
void quickSort(std::vector<int>& input, int low, int high);

#endif //SORT_SORTINGALGORITHMS_H
