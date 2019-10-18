#include <iostream>

using namespace std;
int main() {

    // Değişkenlerin tanımlanması
    int boyut, i, b=1, * A;

    // Boyutun girilmesi
    cout << "Boyut=";
    cin >> boyut;

    // Dizinin tanımlanması
    A = new int[boyut];
    
    // “boyut” kere dönen döngü kullanarak elemanların girilmesi
    for (i = 0; i < boyut; i++) {
        cout << "A[" << i + 1 << "]= ";
        cin >> A[i];
    }
    
    // Dizinin başından merkezine kadar tarayan döngünün oluşturulması
    for (i = 0; i < boyut / 2; i++)

        // Simetrik elemanlar eşitlik kontrolu 
        if (A[i] != A[boyut - 1 - i]) {
            b = 0;
            break;
        }

    // “b”ye göre sonucun yazdırılması
    if (b == 1)
        cout << "A dizisi simetriktir";
    else
        cout << "A dizisi simetrik degildir";
}