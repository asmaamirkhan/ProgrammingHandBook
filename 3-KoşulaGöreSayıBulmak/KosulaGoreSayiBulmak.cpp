#include <iostream>

//Gerekli koşulu sağlayan kaç tane sayı olduğunu bulup bu sayıyı return edeceğiz.
int kosuluSaglayan() {
	int sayac{ 0 };								//Uniform-initialization
	for (int i = 2; i < 100; ++i) {
		if ((i * 2 + 1) % 5 == 0)
			++sayac;
	}
	return sayac;
}



int main() {
	int adet = kosuluSaglayan();
	std::cout << "adet = " << adet << '\n';
}
