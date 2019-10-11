#include <iostream>

using namespace std;
int main()
{
  // Değişkenlerin tanımlanması
  int x, sayi, yakinlik, enyakin, i;
  int enyakin2 = 0, yakinlik2 = -1;

  // “sayi”nın girilmesi
  cin >> sayi;

  // İlk “x” değerinin girilmesi
  cin >> x;

  // İlk değere göre değişkenlere değer atanması
  enyakin = x; 
  yakinlik = abs(x - sayi);
  for (i = 0; i < 9; i++) {
   // “x”in girilmesi   
   cin >> x;

   // Koşullar kontrol edilirken “yakinlik” ve “enyakin” değerlerin değiştirilmesi
   if (abs(x - sayi) < yakinlik) { 
    yakinlik =abs(x - sayi);
    enyakin = x;
   } else if (abs(x - sayi) == yakinlik) {
    if (x != enyakin) {
     yakinlik2 = yakinlik;
     enyakin2 = x;
    }
   }
  }
  if (yakinlik2 == yakinlik)
   cout << "Diger en yakin sayi= " << enyakin2; 
  cout << "En yakin sayi= " << enyakin;
 }