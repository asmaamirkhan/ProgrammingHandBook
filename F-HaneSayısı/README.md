# 🔢 Tam ve Ondalık Hane Sayısı

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Rastgele girilen bir rasyonel sayının ondalık kısmının ve tam kısmının hane sayısını bulan algoritmayı yazınız.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. Sayı girmek.
2. Tam ve ondalık hane sayısını bulmak.
3. Sonuçları ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->
   
## 👓 Çözüm Yöntemi 
- Sayının tam kısmını elde etmek için rasyonel sayının değerini tam sayıya dönüştürerek yeni int değişkene atarız. `150.25 ---int---> 150`
- Sayının ondalık kısmını elde etmek için `sayi%10` sıfır olmadığı sürece hane sayacını artırıp sayıyı 10’la çarparız.
`32.46` ➡ `sayi%10!=0` ➡ `32.46*10` (1)
`324.6` ➡ `sayi%10!=0` ➡ `324.6*10` (2)
`3246` ➡ `sayi%10!=0` ➡ `3246*10` (3)
`32460` ➡ `sayi%10=0`

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `sayi`nın girilmesi.
3. `t_sayi`ya sayının tam değerinin atanması.
4. `t_sayi!=0` iken:
   - `t_sayi` 10’a bölüp `tam_h`nın artırılması
5. `sayi%10!=0` iken:
   - `sayi` 10’la çarpıp `ondalik_h`nın artırılması.
6. Sonuçların ekrana yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
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
    cin >> sayi; // sayının string olarak girilmesi
    // noktaya kadar olan sayıların sayısının bulunması
    for (i = 0; i < sayi.length(); i++) {
        if (sayi[i] != '.') {
            tam++;
        } else {
            break;
        }
    }
    ondalik = sayi.length() - tam - 1; // noktadan sonra sayıların sayısının bulunması
    // Sonuçların yazdırılması
    cout << "Tam kisminin hane sayisi=" << tam << endl;
    cout << "Ondalik kisminin hane sayisi=" << ondalik;
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
# Değişkenlerin tanımlanması
ondalik_h = 0; tam_h = 0
sayi = float(input()) #`sayi`nın girilmesi
sayi1 = sayi
# “t_sayi”ya sayının tam değerinin atanması
t_sayi = int(sayi)
while t_sayi != 0: 
  # “t_sayi” 10’a bölüp “tam_h”nın artırılması   
  t_sayi = t_sayi // 10
  tam_h += 1
while sayi % 10 != 0:
  # “sayi” 10’la çarpıp “ondalik_h”nın artırılması   
  sayi = sayi * 10 
  ondalik_h += 1 
# Sonuçların ekrana yazdırılması
print('Tam kisminin hane sayisi=',  tam_h); 
if sayi1 % 10 != 0:
  # `sayı%10=0` olması için birlerin 0 olması lazım ama hane 
  # sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.
  print('Ondalik kisminin hane sayisi=', ondalik_h - 1)
else:
  print('Ondalik kisminin hane sayisi= ', ondalik_h)
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class HaneSayisi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  // Değişkenlerin tanımlanması
  int ondalik_h = 0, tam_h = 0, t_sayi;
  float sayi, sayi1;
  sayi = input.nextFloat(); // “sayi”nın girilmesi
  sayi1 = sayi;
  t_sayi = (int) sayi; // “t_sayi”ya sayının tam değerinin atanması
  while (t_sayi != 0) {
   // “t_sayi” 10’a bölüp “tam_h”nın artırılması   
   t_sayi = t_sayi / 10;
   tam_h++;
  }
  while (sayi % 10 != 0){
   // “sayi” 10’la çarpıp “ondalik_h”nın artırılması   
   sayi = sayi * 10; 
   ondalik_h++; 
  }
  // Sonuçların ekrana yazdırılması
  System.out.println("Tam kisminin hane sayisi= " + tam_h); 
  if (sayi1 % 10 != 0)
    // `sayı%10=0` olması için birlerin 0 olması lazım ama hane 
    // sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h - 1));
  else
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h));
  input.close();
 }
}
```

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
150.25
Tam kisminin hane sayisi= 3
Ondalik kisminin hane sayisi= 2
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. `sayı%10=0` olması için birlerin 0 olması lazım ama hane sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.