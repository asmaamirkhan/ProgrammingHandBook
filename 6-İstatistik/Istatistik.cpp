#include <iostream>

using namespace std;

//TODO: 1 ile 100 arasındaki tam sayılardan tek ve çift olanların ayrı ayrı toplamını ve ortalamasını bulan algoritma
int main() {
	double tekToplam =  0.0, ciftToplam =  0.0;
	
	int kacTaneTek = 0, kacTaneCift = 0;

	for (int i = 2; i < 100; ++i) {
		if (i % 2 == 0) {
			ciftToplam += i;
			kacTaneCift++;
		}
		else {
			tekToplam += i;
			kacTaneTek++;
		}
	}
	double ortalamaCiftler = ciftToplam / kacTaneCift;
	double ortalamaTekler =  tekToplam / kacTaneTek;


	cout << "Teklerin toplami :" << tekToplam << '\n';
	cout << "Teklerin Ortalamasi : " << ortalamaTekler << '\n';

	cout << "Ciftlerin toplami :" << ciftToplam << '\n';
	cout << "Ciftlerin Ortalamasi : " << ortalamaCiftler << '\n';

	

}
