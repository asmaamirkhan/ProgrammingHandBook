#include <iostream>

using namespace std;

int main() {

    // Değişkenlerin tanımlanması.
    int m, n, f, p, i, j, k, ** A, ** B, ** C;
    cout << "A(m,n) Boyutlarini giriniz:";

    // İki matrisin boyutlarının girilmesi
    cin >> m;
    cin >> n;
    cout << "B(f,p) Boyutlarini giriniz:";
    cin >> f;
    cin >> p;
    
    // Matrislerin oluşturulması
    A = new int * [m];
    B = new int * [f];
    C = new int * [m];
    for (i = 0; i < m; i++)
        A[i] = new int[n];

    for (i = 0; i < f; i++)
        B[i] = new int[p];

    for (i = 0; i < m; i++)
        C[i] = new int[p];

    // Çarpım koşulunun kontrol edilmesi
    if (n != f)
        cout << "Matrisler carpilamaz";
    else {
        // A matrisinin elemenlarının girilmesi   
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++) {
                cout << "A[" << i + 1 << "][" << j + 1 << "]=";
                cin >> A[i][j];
            }
        cout << endl;

        // B matrisinin elemenlarının girilmesi
        for (i = 0; i < f; i++)
            for (j = 0; j < p; j++) {
                cout << "B[" << i + 1 << "][" << j + 1 << "]=";
                cin >> B[i][j];
            }

        // Çarpımın hesaplanması 
        for (i = 0; i < m; i++)
            for (j = 0; j < p; j++)
                for (k = 0; k < n; k++)
                    C[i][j] += A[i][k] * B[k][j];
        cout << "\nA*B=\n";

        // C matrisinin yazdırılması
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++)
                cout << C[i][j] << "    ";
            cout << endl;
        }
    }
}