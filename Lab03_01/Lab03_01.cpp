#include <iostream>

double poleProstokata(double x, double y);

double szer{}, dlug{};

int main()
{
    std::cout << "Podaj szerokość stołu: ";
    std::cin >> szer;
    std::cout << "\nPodaj długość stołu: ";
    std::cin >> dlug;

    int tempNumber = 7;

    poleProstokata(szer, dlug);
    //std::cout << rectangleAreaValue;
    std::cout << tempNumber << "\n"; //Wyświetla się wartość przypisana w funkcji main(), deklaracja zmiennej w funkcji jest lokalna

    std::cout << "Pole powierzchni stołu wynosi: " << poleProstokata(szer, dlug) << "\n";

    return 0;
}

double poleProstokata(double x, double y) {
    int tempNumber = 0;
    double rectangleAreaValue = x * y;
    return rectangleAreaValue;
}