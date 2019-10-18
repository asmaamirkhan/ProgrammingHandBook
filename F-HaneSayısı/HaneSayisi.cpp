// C++ dilinde float türü girdiler beklenenden biraz farklı saklandığı için diğer
//dillerde geçerli yöntemlerin kodlamaya yeni başlayanları zorlayacağını düşündüğümüzden
//bu soruyu farklı bir yöntemle çözmeyi yeğledik (Sayıyı string olarak okuyup strşng üzerinden işlemler yaparark). 
//Float tipiyle ilgili daha fazla bilgi almak için http://floating-point-gui.de/
//adresine göz atabilirsiniz.



#include <iostream>
using namespace std;
int main() {
    // Değişkenlerin tanımlanması
    int i, tam = 0, ondalik = 0;
    string sayi;

    // sayının string olarak girilmesi
    cin >> sayi;
    
	// noktaya kadar olan sayıların sayısının bulunması
    for (i = 0; i < sayi.length(); i++) {
        if (sayi[i] != '.') {
            tam++;
        } else {
            break;
        }
    }
    
	// noktadan sonra sayıların sayısının bulunması
    ondalik = sayi.length() - tam - 1;
    
	// Sonuçların yazdırılması
    cout << "Tam kisminin hane sayisi=" << tam << endl;
    cout << "Ondalik kisminin hane sayisi=" << ondalik;
}