#include <iostream>

using namespace std;

int main() {
    // Değişkenlerin tanımlanması
    int m, n, i, j, ** A, ** B, ** C;

    // Boyutların girilmesi
    cout << "Matrislerin satir sayisini giriniz (m)=";
    cin >> m;
    cout << "Matrislerin sutun sayisini giriniz (n)=";
    cin >> n;

    // Matrislerin oluşturulması
    A = new int * [m];
    B = new int * [m];
    C = new int * [m];
    for (i = 0; i < m; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        C[i] = new int[n];
    }

    // “A” matrisinin girilmesi.
    cout << "A matrisini giriniz:";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]=";
            cin >> A[i][j];
        }

    // “B” matrisinin girilmesi. 
    cout << "B matrisini giriniz:";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]=";
            cin >> B[i][j];
        }

    // İç içe döngü kullanarak karşılıklı elemanların toplanması.
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    cout << "A+B=\n";
    // “C” matrisinin yazdırılması.
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";
        cout << endl;
    }
}