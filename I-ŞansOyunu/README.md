# 🔮 Şans Oyunu

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Şans oyunundaki sayılar iki farklı kutudan rastgele seçilmektedir. 49 adet beyaz top bulunan kutudan 5 farklı top, 42 adet kırmızı top bulunan kutudan bir top seçilmektedir.
`Math.random()` komutunu kullanarak rastgele seçimle şans toplarını belirleyin.

> Not: İlk kutudaki sayılar tekrar edemez, 5 beyaz top 1-49 arasında farklı değerlere sahip olacaktır. Kırmızı top ise 30-72 arasında bir değer alacaktır.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. Farklı rastgele sayılar üretmek.
2. Sayıları ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 
- İki sayı arasında rastgele tam sayı üretmek için aşağıdaki komut kullanılır:
```
rastgele = (int)(Math.random()*(Max-Min=1)+Min); (Max ve Min değerleri dahil)
```
- Üretilen sayıların tekrarlanmasını engellemek için:
  1. `N+1`’lik boolean tipinden `A` dizisi oluşturulur.
  2. Sayı üretildikten sonra `A[sayı] == false` sayı ilk defa üretiliyor anlamına gelir. Bu sayının kullanıldığını belirtmek için `A[sayı] = true` yapılır. `A[sayı] == false` değilse sayı önceden üretilmiş anlamına gelir o yüzden tekrar `rastgele` komutu verilir.

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. 5 kere dönen döngünün oluşturulması
   - `b=0`
   - `b=0` olduğu sürece:
   - `beyaz` üretilip yazdırılır.
3. `kirmizi`nın üretilip yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Değişkenlerin tanımlanması
    bool beyaz_top[50];
    int beyaz, kirmizi, i, b;
    cout << "Beyaz Toplar: ";
    srand(time(NULL));
    // 5 kere dönen döngünün oluşturulması
    for (i = 0; i < 5; i++) {
        b = 0;
        while (b == 0) {
            // `beyaz` üretilip yazdırılır
            beyaz = rand() % (49) + 1;
            if (beyaz_top[beyaz] == false) {
                cout << beyaz << "\t";
                b = 1;
                beyaz_top[beyaz] = true;
            }
        }
    }
    // `kirmizi`nın üretilip yazdırılması
    kirmizi = rand() % (43) + 30;
    cout << "\nKirmizi Top: " << kirmizi;
    return 0;
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
import random
beyaz_top = [False] * 50
print("Beyaz Toplar: ")
for i in range(0, 5):
    b = 0
    while b == 0: 
        beyaz = random.randint(1, 50)
        if beyaz_top[beyaz] == False:
            print(beyaz)
            b = 1
            beyaz_top[beyaz] = True;
    
kirmizi = random.randint(30, 73)
print("Kirmizi Top: ", kirmizi)
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
public class SansOyunu {
 public static void main(String arg[]) {
  boolean beyaz_top[] = new boolean[50];
  int beyaz, kirmizi, i, b;
  System.out.print("Beyaz Toplar: ");
  for (i = 0; i < 5; i++) {
   b = 0;
   while (b == 0) {
    beyaz = (int)(Math.random() * 48 + 1);
    if (beyaz_top[beyaz] == false) {
     System.out.print(beyaz + "\t");
     b = 1;
     beyaz_top[beyaz] = true;
    }
   }
  }
  kirmizi = (int)(Math.random() * 42 + 30);
  System.out.print("\nKirmizi Top: " + kirmizi);
 }
}
```

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
Beyaz Toplar: 37 19 16 3 20
Kirmizi Top: 54
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. Hafızada fazla yer kaplamamak için kontrol dizisini boolean tipinden tanımladık.