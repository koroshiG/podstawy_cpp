#include <iostream>

int main() {

	unsigned short ushort;
	short nshort;
	unsigned long ulong;
	long nlong;
	int nint;
	unsigned int uint;
	long long int llint;
	char nchar;
	bool nbool;
	float nfloat;
	double ndouble;

	ushort = 61200;
	nshort = -30100;
	ulong = 1000000000;
	nlong = -100000000;
	nint = -100000000;
	uint = 1000000000;
	llint = 1000000000000000000;
	nchar = 'A';
	nbool = true;
	nfloat = 3.1f;
	ndouble = 3.1415;

	std::cout << "unsigned short: " << ushort << "\n";
	std::cout << "short: " << nshort << "\n";
	std::cout << "unsigned long: " << ulong << "\n";
	std::cout << "long: " << nlong << "\n";
	std::cout << "int: " << nint << "\n";
	std::cout << "unsigned int: " << uint << "\n";
	std::cout << "long long int int: " << llint << "\n";
	std::cout << "char: " << nchar << "\n";
	std::cout << "bool: " << nbool << "\n";
	std::cout << "float: " << nfloat << "\n";
	std::cout << "double: " << ndouble << "\n";

	std::cin.ignore();
	return 0;
}