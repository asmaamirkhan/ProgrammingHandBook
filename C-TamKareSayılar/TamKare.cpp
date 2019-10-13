#include <iostream>

using namespace std;
int main() {
  // Değişkenlerin tanımlanması
  int i, x, t = 0;

  // “x”in girilmesi
  cin >> x;

  // (X/2+1) kere dönen döngünün oluşturulması
  for (i = 0; i <= x / 2 + 1; i++) {
    // Koşulun kontrol edilmesi.
    if (x == i * i) 
    {
      t = 1;
      // Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
      break;
    }
  }

  // Koşulun sağlanıp sağlanmadığını kontrol etmek için “t”yi kullandık, çünkü koşul sağlandığında “t” değişecek
  // Sonucun yazdırılması
  if (t != 0)
    cout << "tam kare";
  else
    cout << "tam kare degil";
}