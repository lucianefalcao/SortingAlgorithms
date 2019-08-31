#include "CountingSort.h"

void countSort(std::vector<int>& input)
{
    int max = *std::max_element(input.begin(), input.end());
    int min = *std::min_element(input.begin(), input.end());
    int length = max - min + 1;

    std::vector<int> count (length);
    std::vector<int> sort (input.size());

    for(int i = 0; i < input.size(); i++)
    {
        count[input[i] - min]++;
    }

    for(int i = 1; i < count.size(); i++)
        count[i] += count[i-1];

    for(int i = input.size()-1; i >= 0; i--)
    {
        sort[count[input[i] - min] - 1] = input[i];
        count[input[i] - min]--;
    }

    for(int i = 0; i < input.size(); i++)
    {
        input[i] = sort[i];
    }

}