#include "CountingSort.h"
#include <string>
#include <sstream>
#include <fstream>

int main()
{

    freopen("Instancias/counting.txt", "r", stdin);

    int n;

    std::cin >> n;

    std::vector<int> input (n);
    std::string str;
    getline(std::cin, str);

    for (size_t i = 0; i < n; i++)
    {
        getline(std::cin, str);
        std::stringstream ss(str);
        int numb;
        ss >> numb;
        input[i] = numb;
    }    

    countSort(input);

    std::ofstream out;
    std::stringstream s;
    out.open("countsort.txt");
    for(int i = 0; i < input.size(); i++)
    {
        s << input[i] << '\n';
        out << s.rdbuf();
    }

    return 0;
}