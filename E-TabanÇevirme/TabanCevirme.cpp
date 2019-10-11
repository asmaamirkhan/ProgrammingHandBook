#include <iostream>
#include <math.h> 

using namespace std;
int main()
{
  // Değişkenlerin tanımlanması
  int sayi, s = 0, i = 0, basamak;

  // Sayının girilmesi 
  cin >> sayi;

  while (sayi > 0)
  {

   // Çevirme işleminin yapılması   
   basamak = (int)((sayi % 2) * pow(10, i));
   i++;
   sayi = sayi / 2;
   s = s + basamak;
  }

  // Çevrilen sayının ekrana yazdırılması
  cout << s; 
 }
 

