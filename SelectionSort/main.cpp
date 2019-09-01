#include <fstream>
#include <sstream>
#include "SelectionSort.h"

int main(int argc, char** argv)
{
    std::ifstream file (argv[1]);

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

    selectionSort(input);

    std::ofstream out;
    std::stringstream ss;
    out.open("selection.txt");

    for(int i = 0; i < input.size(); i++)
    {
        ss << input[i] << '\n';
        out << ss.rdbuf();
    }

    out.close();

    return 0;
}