#include <iostream>

int enBuyukBul() {
	std::cout << "Lutfen 10 sayi giriniz : ";
	int buyuk{ };
	std::cin >> buyuk;
	for (int i = 0; i < 9; ++i) {
		int sayi{};
		std::cin >> sayi;
		if (sayi > buyuk) {
			buyuk = sayi;
		}
	}
	return buyuk;
}



int main() {
	int sonuc = enBuyukBul();
	std::cout << sonuc << '\n';
}