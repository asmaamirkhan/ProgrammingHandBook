#include <iostream>

using namespace std;

//TODO: 2 katının 1 fazlası 5 ile tam bölüünebilen kaç sayı olduğunu bulan algoritma.
int main() {
	int sayac =  0 ;	
	for (int i = 2; i < 100; ++i) {
		if ((i * 2 + 1) % 5 == 0)
			++sayac;
	}
	cout << "adet : " << sayac << '\n';
	return 0;
}
