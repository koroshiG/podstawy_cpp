#include <iostream>

const int BOARD_SIZE = 3;

char name1[25], name2[25], pMove[3];;
char symbol[2] = { 'O', 'X' };

int board[BOARD_SIZE][BOARD_SIZE] = {};

bool isWinner = false;

short currentPlayer = 0; // 0 - gracz 1| 1 - gracz 2| 2 - brak wyniku

char intToSymbol(int);

bool boardCheck(int[BOARD_SIZE][BOARD_SIZE]);

void printBoard(int[BOARD_SIZE][BOARD_SIZE]);
void playerMove(int(&tab)[BOARD_SIZE][BOARD_SIZE]);
void showWinner(char[]);
void showWinner();

int main()
{
	std::cout << "Podaj nazwę pierwszego gracza: ";
	std::cin >> name1;
	std::cout << "Podaj nazwę drugiego gracza: ";
	std::cin >> name2;

	system("cls");

	while (!isWinner) {
		printBoard(board);
		playerMove(board);
		system("cls");

		if (currentPlayer == 0) {
			currentPlayer = 1;
		}
		else {
			currentPlayer = 0;
		}

		isWinner = boardCheck(board);
	}

	if (currentPlayer == 0) {
		showWinner(name2);
	}
	else if (currentPlayer == 1) {
		showWinner(name1);
	}
	else {
		showWinner();
	}

	printBoard(board);

	return 0;
}

void printBoard(int tab[BOARD_SIZE][BOARD_SIZE]) {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			std::cout << "|" << intToSymbol(tab[i][j]);
		}
		std::cout << "|\n";
	}
}

void showWinner(char name[]) {
	std::cout << "Zwycięża " << name << " Gratulacje!\n";
}

void showWinner() {
	std::cout << "Brak zwycięzcy!\n";
}

void playerMove(int(&tab)[BOARD_SIZE][BOARD_SIZE]) {
	char name[25]{};
	short symNumber{};

	if (currentPlayer) {
		strcpy_s(name, name2);
		symNumber = 2;
	}
	else {
		strcpy_s(name, name1);
		symNumber = 1;
	}

	std::cout << name << " podaj pozycję: ";
	std::cin >> pMove;

	int pMove0 = pMove[0] - '0';
	int pMove1 = pMove[1] - '0';

	if ((pMove0 >= 0 && pMove0 <= BOARD_SIZE - 1) && (pMove1 >= 0 && pMove1 <= BOARD_SIZE - 1)) {
		if (tab[pMove0][pMove1] == 0) {
			tab[pMove0][pMove1] = symNumber;
		}
		else {
			std::cout << "Pole zajęte\n";
			playerMove(tab);
		}
	}
	else {
		std::cout << "Ruch niepoprawny\n";
		playerMove(tab);
	}
}

bool boardCheck(int tab[BOARD_SIZE][BOARD_SIZE]) {
	int temp0Score{};
	int temp1Score{};

	bool isFull = true;
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (tab[i][j] == 0) {
				isFull = false;
				break;
			}
		}
	}

	for (int i = 0; i < BOARD_SIZE; i++) {
		temp0Score = 0;
		temp1Score = 0;

		//poziomo
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (tab[i][j] == 1) {
				temp0Score++;
			}
			else if (tab[i][j] == 2) {
				temp1Score++;
			}
		}
		if (temp0Score == BOARD_SIZE || temp1Score == BOARD_SIZE) {
			return true;
		}

		temp0Score = 0;
		temp1Score = 0;
		//pionowo
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (tab[j][i] == 1) {
				temp0Score++;
			}
			else if (tab[j][i] == 2) {
				temp1Score++;
			}
		}
		if (temp0Score == BOARD_SIZE || temp1Score == BOARD_SIZE) {
			return true;
		}
	}

	temp0Score = 0;
	temp1Score = 0;
	//ukos z góry
	for (int i = 0; i < BOARD_SIZE; i++) {
		if (tab[i][i] == 1) {
			temp0Score++;
		}
		else if (tab[i][i] == 2) {
			temp1Score++;
		}

		if (temp0Score == BOARD_SIZE || temp1Score == BOARD_SIZE) {
			return true;
		}
	}

	temp0Score = 0;
	temp1Score = 0;
	//ukos z dołu
	for (int i = 0; i < BOARD_SIZE; i++) {
		if (tab[BOARD_SIZE - 1 - i][i] == 1) {
			temp0Score++;
		}
		else if (tab[BOARD_SIZE - 1 - i][i] == 2) {
			temp1Score++;
		}

		if (temp0Score == BOARD_SIZE || temp1Score == BOARD_SIZE) {
			return true;
		}
	}

	if (isFull) {
		currentPlayer = 2;
	}
	return isFull;
}

char intToSymbol(int number) {
	switch (number) {
	case 0:
		return '_';
		break;
	case 1:
		return 'O';
		break;
	case 2:
		return 'X';
		break;
	default:
		return '_';
		break;
	}
}
