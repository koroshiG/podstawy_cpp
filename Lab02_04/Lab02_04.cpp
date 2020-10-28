#include <iostream>

int a{}, b{};

int main()
{
    std::cout << "Podaj liczbę a: ";
    std::cin >> a;
    std::cout << "\n";

    std::cout << "Podaj liczbę b: ";
    std::cin >> b;
    std::cout << "\n";

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            std::cout << "Suma a=" << i << " i b=" << j << " równa się " << i + j << "\n";
        }
    }

    std::cin.ignore();
    return 0;
}

