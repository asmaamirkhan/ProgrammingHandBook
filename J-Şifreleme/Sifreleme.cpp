#include <iostream>

using namespace std;

int main() {
    // Değişkenlerin tanımlanması
    int i, harf_sayi = 0, rakam_sayi = 0;
    string metin;

    // Metnin girilmesi
    getline(cin, metin);
    cout << metin;
    // Metnin uzunluğu kadar dönen döngünün oluşturulması
    for (i = 0; i < metin.length(); i++) {

        // Karakterlerin kontrol edilmesi.   
        if (metin[i] >= 'a' && metin[i] <= 'z') {
            metin[i] = (char)(metin[i] - 'a' + 'A');
            harf_sayi++;
        } else
        if (metin[i] >= 'A' && metin[i] <= 'Z')
            harf_sayi++;
        else if (metin[i] >= '0' && metin[i] <= '9') {
            metin[i] = (char)('9' - metin[i] + '0');
            rakam_sayi++;
        }
    }
    // Sonuçların yazdırılması
    cout << "Harf sayisi= " << harf_sayi << endl;
    cout << "Rakam sayisi= " << rakam_sayi << endl;
    for (i = metin.length() - 1; i >= 0; i--)
        cout << metin[i];

}