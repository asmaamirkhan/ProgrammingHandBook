#include <iostream>

using namespace std;

//TODO: Girilen 10 sayıdan en büyüğünü bulan algoritma
int main() {

	cout << "10 tane sayi giriniz : ";
	int enBuyuk, i, sayi;
	cin >> enBuyuk;			//İlk girilen sayıyı direkt en büyük farzediyoruz.
	for (int i = 0; i < 9; ++i) {	//Kalan 9 girileccek sayıdan şayet herhangi birisi bizim farzettiğimizden büyükse			
		cin >> sayi;
		if (sayi > enBuyuk)
			enBuyuk = sayi;			//enBuyuk olarak kabul ediliyor.
	}
	cout << "En Buyuk Sayi : " << enBuyuk << '\n';
}
