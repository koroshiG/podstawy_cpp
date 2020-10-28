#include <iostream>

int main()
{
    int Tablica1[5] = { 1, 2, 3, 4, 5 };
    double Tablica2[7] = { 1.1, 2.22, 3.333, 4.4444, 5.55555, 6.666666, 7.7777777 };
    char Tablica3[4] = { 'a', 'b', 'c', 'd' };

    std::cout << "Tablica1 ma rozmiar " << sizeof(Tablica1) << "\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "el. " << i << ". " << Tablica1[i] << "\n";
    }
    
    std::cout << "Tablica2 ma rozmiar " << sizeof(Tablica2) << "\n";
    for (int i = 0; i < 7; i++) {
        std::cout << "el. " << i << ". " << Tablica2[i] << "\n";
    }

    std::cout << "Tablica3 ma rozmiar " << sizeof(Tablica3) << "\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "el. " << i << ". " << Tablica3[i] << "\n";
    }

    return 0;
}