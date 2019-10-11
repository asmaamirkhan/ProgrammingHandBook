#include <iostream>

using namespace std;
int main()
{
  // Değişkenlerin tanımlanması
  int pay, payda, i = 2, kucuk;
  cout << "Payi gir:";

  // Pay ve paydanın girilmesi
  cin >> pay; 
  cout << "Paydayi gir:";
  cin >> payda;

  // Pay ve paydanın küçüğünün tespit edilmesi
  if (pay > payda) 
   kucuk = abs(payda);
  else kucuk = abs(pay);
  while (i <= kucuk) 
  {
      
   if (pay % i == 0 && payda % i == 0) 
   {
    // pay, payda ve “kucuk” “i”ye bölünmesi
    pay /= i; 
    payda /= i;
    kucuk /= i;
    i = 2; 
   } else i++; 
  }

  // Kesrin son halinin yazdırılması
  cout << pay << " / " << payda;
 }
 

