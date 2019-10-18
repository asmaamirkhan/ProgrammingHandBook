#include <iostream>

using namespace std;

int gir_mat(int ** & A) {
    // Değişkenlerin tanımlanması
    int i, j, n;

    // Boyutun girilmesi
    cout << "Matrisin boyutunu giriniz: ";
    cin >> n;

    // Matrisin oluşturulması
    A = new int * [n];
    for (i = 0; i < n; i++)
        A[i] = new int[n];
    // İç içe döngüyle elemanların girilmesi 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]=";
            cin >> A[i][j];
        }
    }
    // Boyutun geri döndürülmesi
    return n;
}

void print_mat(int ** & A, int n) {
    // Sayaçların tanımlanması
    int i, j;

    // İç içe döngüyle elemanların yazdırılması
    cout << "A Matrisi:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << A[i][j] << "    ";
        cout << endl;
    }
}

void satir_degistir(int ** & A, int n) {
    // Değişkenlerin tanımlanması
    int i, satir1, satir2, temp;

    // İstenen satırların girilmesi
    cout << "Degistirmek istediginiz satirlari girininz:\n";
    cin >> satir1;
    cin >> satir2;

    // Bir döngüyle istenen satırların elemanlarının geçici değişken kullanarak değiştirilmesi
    for (i = 0; i < n; i++) {
        temp = A[satir1 - 1][i];
        A[satir1 - 1][i] = A[satir2 - 1][i];
        A[satir2 - 1][i] = temp;
    }
    cout << satir1 << ". satir &" << satir2 << ". satir degistirildi.\n";
}

void kosegen_degistir(int ** & A, int n) {
    // Değişkenlerin tanımlanması
    int i, temp;
    // Bir döngüyle köşegenlerin elemanlarının geçici değişken kullanarak değiştirilmesi
    for (i = 0; i < n; i++) {
        temp = A[i][i];
        A[i][i] = A[i][n - 1 - i];
        A[i][n - 1 - i] = temp;
    }
    cout << "Kosegenler degistirildi.\n";
}

float ortalama(int ** & A, int n) {
    // Değişkenlerin tanımlanması
    int toplam = 0, i, j;
    float ort;
    // İç içe döngüyle elemanların toplanması
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            toplam += A[i][j];

    // Toplamın “n üzeri 2”ye bölünmesi  
    ort = (float) toplam / (n * n);

    // Ortalamanın geri döndürülmesi
    return ort;
}

int main() {
    int n1 = 0, secenek, ** P;
    do {
        // Seçenek listesinin yazdırılması
        cout << "============================== \n1- Yeni Matris girmek\n2- Matrisi yazdirmak\n3- 2 satiri degistirmek\n4- Kosegenleri degistirmek\n5- Elemanlar ortalamasini hesaplamak\n6- Exit\nYukaridakilerden bir tane seciniz:";
        // Seçeneğin girilmesi
        cin >> secenek;
        switch (secenek) {
            // Girilen seçeneğe göre istenen fonksiyonun çağrılması
        case 1:
            n1 = gir_mat(P);
            break;
        case 2:
            print_mat(P, n1);
            break;
        case 3:
            satir_degistir(P, n1);
            break;
        case 4:
            kosegen_degistir(P, n1);
            break;
        case 5:
            cout << "Ortalama= " << ortalama(P, n1) << endl;
            break;
        case 6:
            break;
        default:
            cout << "Hata!, Girilecek sayi 1,6 arasinda olmalidir!\n";
        }
    } while (secenek != 6);

}