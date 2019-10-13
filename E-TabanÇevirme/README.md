# 🔟 ➡ 2️⃣ Onluk Tabanından İkilik Tabana Çevirme

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
10’luk sayı sistemindeki bir sayıyı 2’lik sayı sistemine çeviren algoritmayı yazınız.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. Sayı girmek.
2. Çevirme işlemini yapmak.
3. Sonucu ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 
- 10’luk sayı sisteminden 2’lik sayı sistemine bir sayı dönüştürmek için basamak değerlerini tek tek hesaplarız. Her basamak değerini hesaplamak için döngümüzde iki adım var:
  - `Sayı%2`yi hesaplayıp 10(i) ile çarparız; `i` 0’dan başlayıp basamağa göre artar.
  - Sayıyı 2’ye böleriz.
- Çevrilen sayıyı bulmak için her basamak değerinin hesaplandığında önceki hesaplanana ekleriz.

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Sayının girilmesi.
3. `sayi>0` iken:
   - Çevirme işleminin yapılması.
4. Çevrilen sayının ekrana yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
#include <math.h> 

using namespace std;
int main()
{
  int sayi, s = 0, i = 0, basamak; // Değişkenlerin tanımlanması
  cin >> sayi; // Sayının girilmesi 
  while (sayi > 0){
   // Çevirme işleminin yapılması   
   basamak = (int)((sayi % 2) * pow(10, i));
   i++;
   sayi = sayi / 2;
   s = s + basamak;
  }
  cout << s; // Çevrilen sayının ekrana yazdırılması
 }
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
from math import pow
# Değişkenlerin tanımlanması
s = 0
i = 0
basamak = 0

# Sayının girilmesi
sayi = int(input())

while (sayi > 0):
    #  Çevirme işleminin yapılması
    basamak = int((sayi % 2) * pow(10, i))
    i += 1
    sayi = sayi // 2
    s = s + basamak

# Çevrilen sayının ekrana yazdırılması
print(s)
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class TabanCevirme {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int sayi, s = 0, i = 0, basamak; // Değişkenlerin tanımlanması
  sayi = input.nextInt(); // Sayının girilmesi 
  while (sayi > 0){
   // Çevirme işleminin yapılması   
   basamak = (int)((sayi % 2) * Math.pow(10, i));
   i++;
   sayi = sayi / 2;
   s = s + basamak;
  }
  // Çevrilen sayının ekrana yazdırılması
  System.out.println(s); 
  input.close();
 }
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C# Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⏹ C# Kodu

```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace TabanCevirme{
    class Program{
        static void Main(string[] args){
            int x, s = 0, i = 1; // Değişkenlerin tanımlanması
            x = Convert.ToInt32(Console.ReadLine()); // Sayının girilmesi 
            while (x > 0){
                // Çevirme işleminin yapılması   
                s = s + ((x % 2) * i);
                x = x / 2;
                i = i * 10;
            }
            // Çevrilen sayının ekrana yazdırılması
            Console.WriteLine(s);
            Console.ReadLine();
        }
    }
}
```

<!-- ----------------------------- Akış Şeması ----------------------------------- -->

## 🧩 Akış Şeması

<img src="./TabanCevirmeSema.png" width="200"  />


<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
67
1000011
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. Sayının kuvvetini almak için `Math.pow(taban, kuvvet)` hazır fonksiyonunu kullandık.