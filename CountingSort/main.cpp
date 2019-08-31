#include "CountingSort.h"
#include <string>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{

    std::ifstream file (argv[1]);

    int n;

    file >> n;

    std::vector<int> input (n);
    std::string str;
    getline(file, str);

    for (size_t i = 0; i < n; i++)
    {
        getline(file, str);
        std::stringstream ss(str);
        int numb;
        ss >> numb;
        input[i] = numb;
    }

    file.close();

    countSort(input);

    std::ofstream out;
    std::stringstream s;
    out.open("countsort.txt");
    for(int i = 0; i < input.size(); i++)
    {
        s << input[i] << '\n';
        out << s.rdbuf();
    }

    out.close();

    return 0;
}