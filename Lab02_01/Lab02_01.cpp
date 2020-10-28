#include <iostream>

int a{}, b{}, c{};

int main() {

	std::cout << "Podaj wartość zmiennej a: ";
	std::cin >> a;
	std::cout << "\nPodaj wartość zmiennej b: ";
	std::cin >> b;
	std::cout << "\nPodaj wartość zmiennej c: ";
	std::cin >> c;

	// +
	std::cout << "Wynik " << a << " + " << b << " to " << a + b << "\n";
	// -
	std::cout << "Wynik " << a << " - " << c << " to " << a - c << "\n";
	// *
	std::cout << "Wynik " << b << " * " << c << " to " << b * c << "\n";
	// /
	std::cout << "Wynik " << a << " / " << b << " to " << a / b << "\n";
	// %
	std::cout << "Wynik " << a << " % " << c << " to " << a % c << "\n";

	std::cin.ignore();

	return 0;
}