#include <iostream>

//TODO: Girilen 10 sayıdan en büyüğünü bulan algoritma
int main() {

	std::cout << "10 tane sayi giriniz : ";
	int enBuyuk{};
	std::cin >> enBuyuk;			//İlk girilen sayıyı direkt en büyük farzediyoruz.
	for (int i = 0; i < 9; ++i) {	//Kalan 9 girileccek sayıdan şayet herhangi birisi bizim farzettiğimizden büyükse,
		int sayi{};					
		std::cin >> sayi;
		if (sayi > enBuyuk)
			enBuyuk = sayi;			//enBuyuk olarak kabul ediliyor.
	}
	std::cout << "En Buyuk Sayi : " << enBuyuk << '\n';
}
