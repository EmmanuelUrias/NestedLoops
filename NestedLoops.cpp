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

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            std::cout << symbols;
        }

        std::cout << '\n';
    }

    return 0;
}