#include <iostream>

short wiek{};
char q = 'T';

int main() {

	while (q == 'T' || q == 't') {
		std::cout << "Witaj użytkowniku. Podaj swój wiek: ";
		std::cin >> wiek;
		std::cout << "\n";

		if (wiek > 18) {
			std::cout << "Jesteś pełnoletni!\n";
		}
		else if (wiek == 18) {
			std::cout << "Właśnie stałeś się pełnoletnim!\n";
		}
		else {
			std::cout << "Nie jesteś pełnoletni!\n";
		}

		std::cout << "Kontynuuj? (T/N): ";
		std::cin >> q;
		std::cout << "\n";
	}
	std::cin.ignore();

	return 0;
}