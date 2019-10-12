#include <iostream>

using namespace std;
int main()
{
    // “isim”in string olarak tanımlanması
    string isim;
  
    // “yil”, “yas”, “buyil”ın tanımlanması
    int yil, yas, buyil = 2019; 

    // “isim” ve “yil”ın girilmesi
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << "Dogum yilinizi giriniz: ";
    cin >> yil;

    // “yas”ın değerinin hesaplanması
    yas = buyil - yil;

    // “isim” ve “yas”ın ekrana yazdırılması
    cout << "Isminiz: " << isim <<  "Yasiniz: " << yas ; 
    
    return 0;
}
