#include <fstream>
#include <sstream>
#include "SelectionSort.h"

int main()
{
    freopen("Instancias/num.100000.4.in", "r", stdin);

    int n;

    std::cin >> n;

    std::vector<int> input (n);
    std::string str;
    getline(std::cin, str);

    for(int i = 0; i < n; i++)
    {
        getline(std::cin, str);
        std::stringstream s (str);
        int numb;
        s >> numb;
        input[i] = numb;
    }

    selectionSort(input);

    std::ofstream out;
    std::stringstream ss;
    out.open("selection.txt");

    for(int i = 0; i < input.size(); i++)
    {
        ss << input[i] << '\n';
        out << ss.rdbuf();
    }

    return 0;
}