#include "SelectionSort.h"

void selectionSort(std::vector<int>& input)
{

    for(int i = 0; i < input.size()-1; i++)
    {
        int smallest = i;
        int j = i+1;

        while(j < input.size())
        {
            if(input[j] < input[smallest])
                smallest = j;
            j++;
        }

        std::swap(input[i], input[smallest]);
    }
}

