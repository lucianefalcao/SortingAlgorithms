#include "CountingSort.h"

void countingSort(std::vector<int>& input, int exp)
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