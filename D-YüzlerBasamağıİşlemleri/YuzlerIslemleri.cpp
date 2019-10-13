#include <iostream>
using namespace std;

void is_tam_kare(int x) {
  int i, t = 0;
  for (i = 0; i <= x / 2 + 1; i++) {
   if (x == i * i) {
    t = 1;
    break;
   }
  }
  if (t == 1)
   // Sonuçların yazdırılması  
   cout << "tam kare"; 
  else
   cout << "tam kare degil";
}

int main()
{
  // Değişkenlerin tanımlanması
  int tam_sayi, kalan = 0; 
  float sayi;

  // “sayı”nın girilmesi
  cin >> sayi;

  // “sayı”nın int’e dönüştürülmesi
  tam_sayi = (int) sayi;

  // Yüzler basamağının bulunması
  tam_sayi = tam_sayi / 100;
  kalan = tam_sayi % 10;

  // Koşulun kontrol edilmesi
  if (kalan % 2 == 0) { 
   kalan = kalan * kalan * kalan;
   is_tam_kare(kalan);
  } else
   // Sonuçların yazdırılması
   cout << "cift degil";
 }
 

