#include <iostream>

int countArea(int x);
int countArea(int x, int y);
float countArea(int r, float pi);

const float PI = 3.14f;
short input{};
int x{}, y{};
bool q = true;

int main()
{
    while (q) {
        std::cout << "Oblicz pole:\n";
        std::cout << "[1] prostokąta\n";
        std::cout << "[2] kwadratu\n";
        std::cout << "[3] okręgu\n";
        std::cout << "[4] zakończ\n";
        std::cout << "Wybór: ";
        std::cin >> input;

        switch (input) {
        case 1:
            std::cout << "Podaj x: ";
            std::cin >> x;
            std::cout << "Podaj y: ";
            std::cin >> y;
            std::cout << "Pole prostokąta wynosi: " << countArea(x, y) << "\n\n";

            std::cout << "Wciśnij klawisz aby kontynuować.\n";
            std::cin.ignore(2);
            break;
        case 2:
            std::cout << "Podaj x: ";
            std::cin >> x;
            std::cout << "Pole kwadratu wynosi: " << countArea(x) << "\n\n";

            std::cout << "Wciśnij klawisz aby kontynuować.\n";
            std::cin.ignore(2);
            break;
        case 3:
            std::cout << "Podaj r: ";
            std::cin >> x;
            std::cout << "Pole okręgu wynosi: " << countArea(x, PI) << "\n\n";

            std::cout << "Wciśnij klawisz aby kontynuować.\n";
            std::cin.ignore(2);
            break;
        case 4:
            q = false;
            break;
        default:
            break;
        }

        system("cls");
    }
}

int countArea(int x) { //kwadrat
    if (x <= 0) {
        return 0;
    }

    return x * x;
}

int countArea(int x, int y) { //prostokąt
    if (x <= 0 || y <= 0) {
        return 0;
    }

    return x * y;
}

float countArea(int r, float pi) { //okrąg
    if (r <= 0) {
        return 0;
    }

    return pi * r * r;
}