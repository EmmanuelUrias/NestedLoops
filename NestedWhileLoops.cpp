#include <iostream>

int main()
{
    int rows;
    std::cout << "How many rows?: ";
    std::cin >> rows;

    int columns;
    std::cout << "How many columns?: ";
    std::cin >> columns;

    char symbols;
    std::cout << "What symbol?: ";
    std::cin >> symbols;

    while (rows > 0)
    {
        int column = columns;
        while (column > 0)
        {
            std::cout << symbols;
            column--;
        }
        std::cout << '\n';
        rows--;
    }

    return 0;
}