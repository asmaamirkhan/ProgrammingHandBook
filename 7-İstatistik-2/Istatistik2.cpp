#include <iostream>

using namespace std;


//TODO:
//Girilen 20 adet sayıyı alarak;
//Sayıların ortalamasını.
//En büyük ve en küçük sayıları bulan.
//Pozitif sayıların ortalamasını bulan.
//100 - 200 arasındaki sayıların sayısını bulan algoritmayı yazınız.

int main() {

	int enBuyuk, enKucuk;
	int pozitifSayılarToplamı = 0, pozitifSayilarAdet = 0, sayilarToplami = 0;
	int yüzIkiYuzArasında = 0;
	int baslangic;

	cout << "Lutfen 20 adet sayi giriniz : ";
	for (int i = 0; i < 20; ++i) {
		int sayi;
		cin >> sayi;
		if (i == 0) {
			enBuyuk = sayi;
			enKucuk = sayi;
		}
		sayilarToplami += sayi;
		if (sayi > enBuyuk)
			enBuyuk = sayi;
		else if (sayi < enKucuk)
			enKucuk = sayi;

		if (sayi > 0) {
			pozitifSayılarToplamı += sayi;
			pozitifSayilarAdet++;
		}
		if (sayi > 100 && sayi < 200)
			yüzIkiYuzArasında++;
	}


	cout << "Ortalama = " << (double)sayilarToplami / 20 << '\n';
	cout << "En buyuk sayi = " << enBuyuk << '\n';
	cout << "En kucuk sayi = " << enKucuk << '\n';
	cout << "Pozitif olanlarin ortalamasi = " << (double)pozitifSayılarToplamı/pozitifSayilarAdet << '\n';
	cout << "100-200 arasindaki sayilarin sayisi = " << yüzIkiYuzArasında << '\n';

}
