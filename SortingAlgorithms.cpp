#include "SortingAlgorithms.h"

void countingSort(std::vector<int>& input)
{
    int max = *std::max_element(input.begin(), input.end());
    int min = *std::min_element(input.begin(), input.end());
    int length = max - min + 1;

    std::vector<int> count (length);
    std::vector<int> sort (input.size());

    for(int i = 0; i < input.size(); i++)
        count[input[i] - min]++;

    for(int i = 1; i < count.size(); i++)
        count[i] += count[i-1];

    for(int i = input.size()-1; i >= 0; i--)
    {
        sort[count[input[i] - min] - 1] = input[i];
        count[input[i] - min]--;
    }

    for(int i = 0; i < input.size(); i++)
        input[i] = sort[i];
}

void radixSort(std::vector<int>& input)
{
    int max = *std::max_element(input.begin(), input.end());

    for(int i = 1; max/i > 0; i *= 10)
        radixCount(input, i);
}

void radixCount(std::vector<int>& input, int exp)
{
    int min = *std::min_element(input.begin(), input.end());

    if(min > 0)
        min = -min;

    int size = input.size();
    std::vector<int> count (10-min);
    std::vector<int> sorted (size);

    for(int i = 0; i < size; i++)
        count[ ((input[i] / exp) % 10) - min]++;

    for(int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

    for(int i = size - 1; i >= 0; i--)
    {
        sorted[ count[ ((input[i] / exp) % 10) - min ] - 1] = input[i];
        count[ ((input[i] / exp) % 10) - min ]--;
    }

    for(int i = 0; i < size; i++)
        input[i] = sorted[i];
}

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