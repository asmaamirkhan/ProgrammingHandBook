#include <iostream>

using namespace std;

int main() {
	int sanliurfaNufus =  500000 , gaziantepNufus =  900000 ;
	for (int yil = 1; ; ++yil) {
		sanliurfaNufus = sanliurfaNufus * 102.5 / 100;
		gaziantepNufus = gaziantepNufus * 101.4 / 100;
		if (sanliurfaNufus > gaziantepNufus) {
			cout << yil <<" yil sonra\n";
			cout << "Gaziantep'in nufusu :" << gaziantepNufus << '\n';
			cout << "Sanliurfa'nin nufusu :" << sanliurfaNufus << '\n';
			break;
		}
	}
	return 0;
}
