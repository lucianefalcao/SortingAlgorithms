#include "InsertionSort.h"

void insertionSort(std::vector<int>& input)
{
    int key, j;

    for(int i = 1; i < input.size(); i++)
    {
        key = input[i];
        j = i - 1;

        while (j >= 0 && input[j] > key)
        {
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }
}