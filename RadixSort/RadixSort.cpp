#include "RadixSort.h"

void radixSort(std::vector<int>& input)
{
    int max = *std::max_element(input.begin(), input.end());

    for(int i = 1; max/i > 0; i *= 10)
        countingSort(input, i);
}