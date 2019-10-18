# 🍏🍎 Simetrik Diziler

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Boyutu ve elemanları klavyeden girilen bir dizinin simetrik olup olmadığını kontrol eden programı yazınız.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. Diziyi girmek.
2. Dizinin simetrik olup olmadığını kontrol etmek.
3. Sonucu yazdırmak.
   
<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 
- Bir dizinin simetrik olması için merkezine göre simetrik elemanlar eşit olmalıdır. 
  - Örneğin: `A= {1,5,8,5,1}, B= {1,5,5,1}` dizileri simetriklerdir.
- Başlangıç değeri `b=1` olan bir değişken tanımlanır dizinin herhangi iki simetrik elemanı eşit değilse değişkenin değeri değişecek.
- En sonda, değişkenin değeri `1` ise dizi simetriktir, değilse dizi simetrik değildir.

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Boyutun girilmesi.
3. Dizinin tanımlanması.
4. `boyut` kere dönen döngü kullanarak elemanların girilmesi.
5. Dizinin başından merkezine kadar tarayan döngünün oluşturulması:
   - Simetrik elemanlar eşit değilse:
     - `b=0`
     - döngü kırılır.
6. `b`ye göre sonucun yazdırılması.

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
    int boyut, i, b=1, * A; // Değişkenlerin tanımlanması
    // Boyutun girilmesi
    cout << "Boyut=";
    cin >> boyut;
    A = new int[boyut]; // Dizinin tanımlanması    
    // “boyut” kere dönen döngü kullanarak elemanların girilmesi
    for (i = 0; i < boyut; i++) {
        cout << "A[" << i + 1 << "]= ";
        cin >> A[i];
    }
    // Dizinin başından merkezine kadar tarayan döngünün oluşturulması
    for (i = 0; i < boyut / 2; i++) 
        if (A[i] != A[boyut - 1 - i]) { // Simetrik elemanlar eşitlik kontrolu
            b = 0;
            break;
        }
    // “b”ye göre sonucun yazdırılması
    if (b == 1)
        cout << "A dizisi simetriktir";
    else
        cout << "A dizisi simetrik degildir";
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
# Değişkenlerin tanımlanması
b = 1
print("Boyut=")
boyut = int(input())# Boyutun girilmesi
A = [] # Dizinin tanımlanması
# “boyut” kere dönen döngü kullanarak elemanların girilmesi
for i in range(boyut):
    print("A[{}]=".format(i + 1))
    A.append(int(input()))
# Dizinin başından merkezine kadar tarayan döngünün oluşturulması
for i in range(boyut // 2):
    # Simetrik elemanlar eşitlik kontrolu 
    if A[i] != A[boyut - 1 - i]:
        b = 0
        break

# “b”ye göre sonucun yazdırılması
if b == 1: 
   print("A dizisi simetriktir")
else:
   print("A dizisi simetrik degildir")
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
class SimetrikDiziler {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int i, boyut, b = 1; // Değişkenlerin tanımlanması
  System.out.printf("Boyut=");
  boyut = input.nextInt(); // Boyutun girilmesi
  int A[] = new int[boyut]; // Dizinin tanımlanması
  // “boyut” kere dönen döngü kullanarak elemanların girilmesi
  for (i = 0; i < boyut; i++) {
   System.out.printf("A[%d]=", i + 1);
   A[i] = input.nextInt();
  }
  // Dizinin başından merkezine kadar tarayan döngünün oluşturulması
  for (i = 0; i < boyut / 2; i++)  
   if (A[i] != A[boyut - 1 - i]) { // Simetrik elemanlar eşitlik kontrolu
   b = 0;
   break;
  }
  // “b”ye göre sonucun yazdırılması
  if (b == 1) 
   System.out.println("A dizisi simetriktir");
  else
   System.out.println("A dizisi simetrik degildir");
  input.close();
 }
}
```

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
Boyut=5
A[1]=1
A[2]=4
A[3]=5
A[4]=4
A[5]=1
A dizisi simetriktir

Boyut=4
A[1]=1
A[2]=2
A[3]=3
A[4]=4
A dizisi simetrik degildir
```