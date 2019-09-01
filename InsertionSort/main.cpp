#include "InsertionSort.h"
#include <sstream>
#include <fstream>

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

    insertionSort(input);

    std::ofstream out;
    out.open("insertion.txt");

    for (int i = 0; i < n; i++)
    {
        std::stringstream ss;
        ss << input[i] << '\n';
        out << ss.rdbuf();
    }

    out.close();

    return 0;
}