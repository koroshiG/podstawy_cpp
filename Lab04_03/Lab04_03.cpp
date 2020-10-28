#include <iostream>

int main()
{
	double tab[4][3] = { {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}, {3.1, 3.2, 3.3}, {4.1, 4.2, 4.3} };
	int x{}, y{};

	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "Podaj wiersz: ";
	std::cin >> x;
	std::cout << "Podaj kolumnę: ";
	std::cin >> y;
	std::cout << "Podaj wartość: ";
	std::cin >> tab[x][y];


	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}