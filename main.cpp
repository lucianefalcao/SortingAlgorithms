#include <fstream>
#include <sstream>
#include <cstring>
#include "SortingAlgorithms.h"

int main(int argc, char** argv)
{
    std::ifstream file (argv[2]);

    int n;

    file >> n;

    std::vector<int> input (n);
    std::string str;
    getline(file, str);

    for(int i = 0; i < n; i++)
    {
        getline(file, str);
        std::stringstream s(str);
        int numb;
        s >> numb;
        input[i] = numb;
    }

    file.close();

    std::string algorithm;

    if(!strcmp(argv[1], "counting"))
    {
        countingSort(input);
        algorithm = "You used counting sort\n";
    }
    else if(!strcmp(argv[1], "radix"))
    {
        radixSort(input);
        algorithm = "You used radix sort\n";
    }
    else if(!strcmp(argv[1], "selection"))
    {
        selectionSort(input);
        algorithm = "You used selection sort\n";
    }
    else if(!strcmp(argv[1], "insertion"))
    {
        insertionSort(input);
        algorithm = "You used insertion sort\n";
    }
    else if(!strcmp(argv[1], "merge"))
    {
        mergeSort(input, 0, input.size() - 1);
        algorithm = "You used merge sort\n";
    }
    else if(!strcmp(argv[1], "quick"))
    {
        quickSort(input, 0, input.size() - 1);
        algorithm = "You used quick sort\n";
    }
    else
    {
        std::cout << "Sorting algorithm not available, sorry!\n";
        exit(0);
    }

    std::ofstream out;
    std::stringstream ss;
    out.open("OrderedData.txt");
    out << algorithm;
    for(int i = 0; i < input.size(); i++)
    {
        ss << input[i] << '\n';
        out << ss.rdbuf();
    }

    out.close();

    return 0;
}