#include <iostream>

int main()
{
    char imie[82], imiecp[82], nazwisko[55];

    std::cout << "Podaj swoje imię: ";
    std::cin.getline(imie, 81);
    std::cout << "Podaj swoje nazwisko: ";
    std::cin.getline(nazwisko, 54);

    imie[0] = toupper(imie[0]);
    nazwisko[0] = toupper(nazwisko[0]);

    strcpy_s(imiecp, imie);

    std::cout << nazwisko << " " << imiecp << " " << nazwisko[0] << imiecp[0];
    return 0;
}
