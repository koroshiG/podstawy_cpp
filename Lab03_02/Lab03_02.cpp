#include <iostream>

double poleProstokata(double =3, double =5);

double szer{}, dlug{};

int main()
{
    for (int i = -4; i <= 40; i += 4) {
        for (int j = -4; j <= 40; j += 4) {
            if (i % 10 == 0 || j % 10 == 0) {
                std::cout << "3 * 5 = " << poleProstokata() << "\n";
            }
            std::cout << i << " * " << j << " = " << poleProstokata(i, j) << "\n";
        }
    }

    std::cout << "Podaj szerokość stołu: ";
    std::cin >> szer;
    std::cout << "\nPodaj długość stołu: ";
    std::cin >> dlug;
    std::cout << "Pole powierzchni stołu wynosi: " << poleProstokata(szer, dlug) << "\n";

    return 0;
}

double poleProstokata(double x, double y) {
    if (x <= 0 || y <= 0) {
        return 0;
    }
    else if (x * y > 1000) {
        return 1000;
    }
    else {
        return x * y;
    }
}