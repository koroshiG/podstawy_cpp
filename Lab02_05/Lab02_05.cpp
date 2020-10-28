#include <iostream>

int ulub{}, q = 0;
short wybor{};

int main()
{
    std::cout << "Podaj swoją ulubioną liczbę: ";
    std::cin >> ulub;
    std::cout << "\n";

    while (true) {
        system("cls");
        std::cout << "[1] wyświetl liczby od 1 do ulubionej\n";
        std::cout << "[2] wyświetl liczby od 1 do ulubione\n";
        std::cout << "[3] wyświetl tylko modulo 5 dla liczby od 1 do ulubionej\n";
        std::cout << "[4] wyświetl liczby większe niż 5 ale mniejsze niż 10\n";

        std::cout << "Wybierz opcję: ";
        std::cin >> wybor;
        std::cout << "\n";

        int i = 1;

        switch (wybor) {
        case 1:
            std::cout << "Opcja nr 1\n";
            while (i <= ulub) {
                std::cout << i++ << "\n";
            }
            break;

        case 2:
            std::cout << "Opcja nr 2\n";
            do {
                std::cout << i++ << "\n";
            } while (i <= ulub);
            break;

        case 3:
            std::cout << "Opcja nr 3\n";
            for (i; i <= ulub; i++) {
                std::cout << i%5 << "\n";
            }
            break;

        case 4:
            std::cout << "Opcja nr 4\n";
            while (i <= ulub) {
                if (i > 5 && i < 10) {
                    std::cout << i << "\n";
                }
                i++;
            }
            break;

        default:
            std::cout << "Nie ma takiej opcji!\n";
            break;
        }

        std::cout << "Czy chcesz kontynuować? [nie - 0 | tak - 1]: ";
        std::cin >> q;
        std::cout << "\n";

        if (!q) {
            break;
        }
    }
    return 0;
}
