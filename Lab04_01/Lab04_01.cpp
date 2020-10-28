#include <iostream>

int main()
{
    int tab_wiek[4];

    tab_wiek[0] = 19;
    tab_wiek[1] = 20;

    for (int i = 2; i < 4; i++) {
        std::cout << "Podaj wiek dla studenta nr " << i << ": ";
        std::cin >>tab_wiek[i];
    }

    for (int i = 0; i < 4; i++) {
        std::cout << "Student nr " << i << ": " << tab_wiek[i] << "\n";
    }

    return 0;
}
