# ➕ İki Matrisin Toplamı

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Boyutları ve elemanları klavyeden girilen iki matrisin toplamını hesaplayan programı yazınız.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. İki matrisin boyutları ve elemanlarını girmek.
2. Toplama işlemini gerçekleştirmek.
3. Sonuç matrisini yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi  ----------------------------------- -->

## 👓 Çözüm Yöntemi 
- 2 matrisi toplamak için matrislerin karşılıklı elemanları toplanır.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Boyutların girilmesi.
3. Matrislerin oluşturulması.
4. `A` matrisinin girilmesi.
5. `B` matrisinin girilmesi.
6. İç içe döngü kullanarak karşılıklı elemanların toplanması.
7. `C` matrisinin yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
using namespace std;
int main() {
    int m, n, i, j, ** A, ** B, ** C; // Değişkenlerin tanımlanması
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
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
# Boyutların girilmesi
print("Matrislerin satir sayisini giriniz (m)=")
m = int(input())
print("Matrislerin sutun sayisini giriniz (n)=")
n = int(input())
# “A” matrisinin oluşturulması
A = [[0 for i in range(n)] for i in range(m)]
# “A” matrisinin girilmesi
print("A matrisini giriniz:")
for i in range(m):
    for j in range(n):
        print('A[{}][{}]'.format(i+1, j+1))
        A[i][j] = int(input())
# “B” matrisinin oluşturulması
B = [[0 for i in range(n)] for i in range(m)]
# “B” matrisinin girilmesi
print("B matrisini giriniz:")
for i in range(m):
    for j in range(n):
        print('B[{}][{}]'.format(i+1, j+1))
        B[i][j] = int(input())
# “C” matrisinin oluşturulması
C = [[0 for i in range(n)] for i in range(m)]
# İç içe döngü kullanarak karşılıklı elemanların toplanması
for i in range(m):
    for j in range(n):
        C[i][j] = A[i][j] + B[i][j]
# Sonucun yazdırılması
print(C)

# Not: daha verimli işlemler için NumPy kütüphanesini araştır
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu


```java
import java.util.*;
public class MatrisToplama {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int m, n, i, j; 
  System.out.print("Matrislerin satir sayisini giriniz (m)=");
  
  // Boyutların girilmesi
  m = input.nextInt(); 
  System.out.print("Matrislerin sutun sayisini giriniz (n)=");
  n = input.nextInt(); 

  // Matrislerin oluşturulması
  int A[][] = new int[m][n]; 
  int B[][] = new int[m][n];
  int C[][] = new int[m][n];

  // “A” matrisinin girilmesi.
  System.out.println("A matrisini giriniz:");
  for (i = 0; i < m; i++)
   for (j = 0; j < n; j++) {
    System.out.printf("A[%d][%d]=", i + 1, j + 1);
    A[i][j] = input.nextInt();
   } 

  // “B” matrisinin girilmesi. 
  System.out.println("B matrisini giriniz:");
  for (i = 0; i < m; i++)
   for (j = 0; j < n; j++) {
    System.out.printf("B[%d][%d]=", i + 1, j + 1);
    B[i][j] = input.nextInt();
   } 

   // İç içe döngü kullanarak karşılıklı elemanların toplanması.
  for (i = 0; i < m; i++) 
   for (j = 0; j < n; j++) {
    C[i][j] = A[i][j] + B[i][j];
   }
  System.out.printf("A+B=\n");
  // “C” matrisinin yazdırılması.
  for (i = 0; i < m; i++) {
   for (j = 0; j < n; j++)
    System.out.printf("%d ", C[i][j]); 
   System.out.printf("\n");
  }
  input.close();
 }
}
```



## 🎉 Ekran Çıktısı

```
Matrislerin satir sayisini giriniz (m)=2
Matrislerin sutun sayisini giriniz (n)=2

A matrisini giriniz:
A[1][1]=1
A[1][2]=2
A[2][1]=3
A[2][2]=4

B matrisini giriniz:
B[1][1]=5
B[1][2]=6
B[2][1]=7
B[2][2]=8

A+B=
6 8
10 12
```

## 💡 Notlar 
- İki boyutlu matrislerin üzerinde yapılan işlemler iç içe döngü kullanarak yapılır.