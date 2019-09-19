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

    sort.clear();
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

void merge(std::vector<int>& input, int left, int middle, int right)
{
    int i, j, k;

    std::vector<int>* L = new std::vector<int> (middle - left + 1);
    std::vector<int>* R = new std::vector<int> (right - middle);

    for(i = 0; i < L->size(); i++)
    {
        (*L)[i] = input[left+i];
    }
    for(j = 0; j < R->size(); j++)
    {
        (*R)[j] = input[middle + 1 + j];
    }

    i = j = 0;
    k = left;

    while (i < L->size() && j < R->size())
    {
        if((*L)[i] <= (*R)[j])
        {
            input[k] = (*L)[i];
            i++;
        }
        else
        {
            input[k] = (*R)[j];
            j++;
        }

        k++;
    }

    while (i < L->size())
    {
        input[k] = (*L)[i];
        i++;
        k++;
    }

    while (j < R->size())
    {
        input[k] = (*R)[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& input, int left, int right)
{
    if(left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(input, left, middle);
        mergeSort(input, middle+1, right);

        merge(input, left, middle, right);
    }
}

int partition(std::vector<int>& input, int low, int high)
{
    int pivot = input[high];
    int i = (low - 1);

    for(int j = low; j <= high - 1; j++)
    {
        if(input[j] < pivot)
        {
            i++;
            std::swap(input[i], input[j]);
        }
    }

    std::swap(input[i + 1], input[high]);

    return (i + 1);
}

void quickSort(std::vector<int>& input, int low, int high)
{
    if(low < high)
    {
        int p = partition(input, low, high);

        quickSort(input, low, p - 1);
        quickSort(input, p + 1, high);
    }
}