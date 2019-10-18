#include <iostream>

using namespace std;


//TODO:
//Girilen 20 adet sayıyı alarak;
//Sayıların ortalamasını.
//En büyük ve en küçük sayıları bulan.
//Pozitif sayıların ortalamasını bulan.
//100 - 200 arasındaki sayıların sayısını bulan algoritmayı yazınız.

int main() {
	// Değişkenlerin tanımlanması
	int i, enBuyuk, enKucuk, pozitifSayılarToplamı = 0, pozitifSayilarAdet = 0, sayilarToplami = 0;
	int yuzIkiYuzArasında = 0, sayi;
	float ort, pozitifOrt;
	// İlk değerin döngüye girmeden girilmesi
	cin >> sayi; 
	enBuyuk = sayi;
	enKucuk = sayi;

	// Değişkenlere koşullar kontrol edilerek değer atanması
	if(sayi > 0){
		pozitifSayilarAdet++;
		pozitifSayılarToplamı += sayi;
	}
	if(sayi > 100 && sayi < 200)
		yuzIkiYuzArasında++;
	sayilarToplami += sayi;

	// “adet-1” kere dönen döngünün oluşturulması
	for (i = 0; i < adet - 1; ++i) {
		// “sayi” değerinin döngüde girilmesi
		cin >> sayi;

		// “sayi” değerinin “sayilarToplami”a eklenmesi
		sayilarToplami += sayi;

		// “sayi>enBuyuk” ve “sayi<enKucuk” koşulunun kontrol edilmesi. 
		if (sayi > enBuyuk)
			enBuyuk = sayi;
		else if (sayi < enKucuk)
			enKucuk = sayi;

		 // Pozitif sayıların tespit edilmesi
		if (sayi > 0) {
			pozitifSayılarToplamı += sayi;
			pozitifSayilarAdet++;
		}

		// 100<x<200 koşulunun kontrol edilmesi
		if (sayi > 100 && sayi < 200)
			yuzIkiYuzArasında++;
	}

	// Ortalamaların hesaplanması
	ort = sayilarToplami / adet;
	pozitifOrt = pozitifSayılarToplamı / pozitifSayilarAdet
	
	// Sonuçların yazdırılması
	cout << "Ortalama = " << ort << '\n';
	cout << "En buyuk sayi = " << enBuyuk << '\n';
	cout << "En kucuk sayi = " << enKucuk << '\n';
	cout << "Pozitif olanlarin ortalamasi = " << pozitifOrt << '\n';
	cout << "100-200 arasindaki sayilarin sayisi = " << yuzIkiYuzArasında << '\n';

}
