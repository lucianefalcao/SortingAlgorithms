#include "RadixSort.h"
#include <fstream>
#include <sstream>

int main()
{
    freopen("Instancias/num.10000.4.in", "r", stdin);
    
    int n;

    std::cin >> n;

    std::vector<int> input (n);
    std::string str;
    getline(std::cin, str);

    for(int i = 0; i < n; i++)
    {
        getline(std::cin, str);
        std::stringstream s(str);
        int numb;
        s >> numb;
        input[i] = numb;
    }

    radixSort(input);

    std::ofstream out;
    out.open("radix.txt");
    for(int i = 0; i < input.size(); i++)
    {
        std::stringstream ss;
        ss << input[i] << '\n';
        out << ss.rdbuf();
    }

    return 0;
}