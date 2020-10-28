#include <iostream>

unsigned short l_rodzenstwa{};
char inicjal{};
const float PI = 3.14f;

int main() {

	std::cout << PI << std::endl;

	std::cout << "Podaj liczbę rodzeństwa: ";
	std::cin >> l_rodzenstwa;
	std::cout << "\nPodaj pierwszą literę imienia: ";
	std::cin >> inicjal;

	std::cout << "oo, masz " << l_rodzenstwa << " rodzeństwa, Hej " << inicjal << ", co tam u ciebie?\n";

	std::cin.ignore();
	return 0;
}