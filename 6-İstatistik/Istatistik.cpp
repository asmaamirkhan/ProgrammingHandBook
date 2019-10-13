#include <iostream>


//TODO: 1 ile 100 arasındaki tam sayılardan tek ve çift olanların ayrı ayrı toplamını ve ortalamasını bulan algoritma
int main() {
	//Uniform-initialization (C++11), daha önce duymadıysan lütfen uniform-initialization'ı araştır!!!
  //assignment, direct-initialization, copy-initialization, uniform-initialization.
	double tekToplam{ 0.0 }, ciftToplam{ 0.0 };
	
	int kacTaneTek{ 0 }, kacTaneCift{ 0 };

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
	double ortalamaCiftler{ ciftToplam / kacTaneCift };
	double ortalamaTekler{ tekToplam / kacTaneTek };


	std::cout << "Teklerin toplami :" << tekToplam << '\n';
	std::cout << "Teklerin Ortalamasi : " << ortalamaTekler << '\n';

	std::cout << "Ciftlerin toplami :" << ciftToplam << '\n';
	std::cout << "Ciftlerin Ortalamasi : " << ortalamaCiftler << '\n';

	

}
