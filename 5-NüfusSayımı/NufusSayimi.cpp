#include <iostream>


int main() {
	int sanliurfaNufus{ 500000 }, gaziantepNufus{ 900000 };
	for (int yil = 1; ; ++yil) {
		sanliurfaNufus = sanliurfaNufus * 102.5 / 100;
		gaziantepNufus = gaziantepNufus * 101.4 / 100;
		if (sanliurfaNufus > gaziantepNufus) {
			std::cout << yil <<" yil sonra\n";
			std::cout << "Gaziantep'in nufusu :" << gaziantepNufus << '\n';
			std::cout << "Sanliurfa'nin nufusu :" << sanliurfaNufus << '\n';
			break;
		}
	}
	return 0;
}
