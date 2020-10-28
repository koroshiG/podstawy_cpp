#include <iostream>

int x = 20, ulub{};

int main() {
	std::cout << "Podaj swoją ulubioną liczbę: ";
	std::cin >> ulub;
	std::cout << "\n";

	int i = 0;
	while (i <= x) {
		std::cout << i << "\n";
		if (i == ulub) {
			std::cout << "^ to twoja ulubiona liczba!\n";
			break;
		}
		i++;
	}

	std::cin.ignore();

	return 0;
}