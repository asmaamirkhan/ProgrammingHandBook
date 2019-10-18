# 📊 İstatistik

<!-- ----------------------------- Soru  ----------------------------------- -->

## ❓ Soru
1 ile 100 arasındaki tam sayılardan tek ve çift olanların ayrı ayrı toplamını ve ortalamasını bulan algoritmayı yazınız.

<!-- ----------------------------- Program Kısımları  ----------------------------------- -->

## ⛓ Program Kısımları
1. Sayının çift veya tek olduğunu kontrol etmek.
2. Tek ve çift sayıların toplamını ve ortalamasının ayrı ayrı hesaplamak.
3. Sonuçları ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi  ----------------------------------- -->
   
## 👓 Çözüm Yöntemi 
- “i%2” değerine göre sayının tek veya çift olduğunu tespit ederiz.
- (Ortalama = sayılar toplamı/ sayılar adedi) olduğu bellidir. Döngü içinde toplam değişkenini kullanarak sayıların toplamını elde ederiz.

<!-- ----------------------------- Çözüm Adımları  ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. 2’den 100’a kadar döngünün oluşturulması.
   - Koşulun kontrol edilmesi.
   - Önceki adım sonucuna göre (çift veya tek):
     - Sayılar adedinin artırılması.
     - Sayılar toplamına `i` değerinin eklenmesi.
3. Ortalamaların hesaplanması.
4. Sonuçların yazdırılması.

<!-- ----------------------------- Kodlar  ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
using namespace std;
int main() {
	int kacTaneTek = 0, kacTaneCift = 0, i; // Değişkenlerin tanımlanması
     // Bölme işleminden reel sayı çıkabileceği için ortalama değişkenlerini float tanımladık 
     double tekToplam =  0.0, ciftToplam =  0.0, ortalamaCiftler, ortalamaTekler;	
	for ( i = 2; i < 100; ++i) { // 2’den 100’a kadar döngünün oluşturulması 
		if (i % 2 == 0) {
			ciftToplam += i; // Çift sayılar toplamına “i” değerinin eklenmesi
			kacTaneCift++; // çift sayılar adedinin artırılması
		}
		else {
			tekToplam += i; // Tek sayılar toplamına “i” değerinin eklenmesi
			kacTaneTek++; // Tek sayılar adedinin artırılması
		}
	}
     // Ortalamaların hesaplanması "int/int=int" olduğu için "t_toplam, c_toplam" değişkenleri float tanımladık.
	ortalamaCiftler  = ciftToplam / kacTaneCift;
	ortalamaTekler =  tekToplam / kacTaneTek;
     // Sonuçların yazdırılması
	cout << "Teklerin toplami :" << tekToplam << '\n';
	cout << "Teklerin Ortalamasi : " << ortalamaTekler << '\n';
	cout << "Ciftlerin toplami :" << ciftToplam << '\n';
	cout << "Ciftlerin Ortalamasi : " << ortalamaCiftler << '\n';
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
# Değişkenlerin tanımlanması
t_adet = 0; c_adet = 0; t_toplam = 0
t_ort = 0; c_toplam = 0; c_ort = 0
for i in range(2,101): # 2’den 100’a kadar döngünün oluşturulması
    if(i % 2 == 1): #  Koşulun kontrol edilmesi
        t_adet +=1 # Tek sayılar adedinin artırılması
        t_toplam = t_toplam + i # Tek sayılar toplamına “i” değerinin eklenmesi
    else:
        c_adet += 1 #  çift sayılar adedinin artırılması
        c_toplam = c_toplam + i # çift sayılar toplamına “i” değerinin eklenmesi
# Ortalamaların hesaplanması 
t_ort = t_toplam / t_adet
c_ort = c_toplam / c_adet
# Sonuçların yazdırılması
print("Teklerin toplami= ",t_toplam)
print("Teklerin ortalamasi= ",t_ort)
print("Ciftlerin toplami= ",c_toplam)
print("Ciftlerin ortalamasi= ",c_ort)
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
public class Istatistik {
 public static void main(String arg[]) {
  int i, t_adet = 0, c_adet = 0; // Değişkenlerin tanımlanması
  // Bölme işleminden reel sayı çıkabileceği için ortalama değişkenlerini float tanımladık 
  float t_toplam = 0, t_ort, c_toplam = 0, c_ort;
  for (i = 2; i < 100; i++) { // 2’den 100’a kadar döngünün oluşturulması 
   if (i % 2 == 1){ // Koşulun kontrol edilmesi   
    t_adet++; // Tek sayılar adedinin artırılması
    t_toplam = t_toplam + i; // Tek sayılar toplamına “i” değerinin eklenmesi
   } else {
    c_adet++; // çift sayılar adedinin artırılması
    c_toplam = c_toplam + i; // Çift sayılar toplamına “i” değerinin eklenmesi
   }
  } 
  // Ortalamaların hesaplanması "int/int=int" olduğu için "t_toplam, c_toplam" değişkenleri float tanımladık.
  t_ort = t_toplam / t_adet; 
  c_ort = c_toplam / c_adet; 
  // Sonuçların yazdırılması
  System.out.println("Teklerin toplami= " + t_toplam);
  System.out.println("Teklerin ortalamasi= " + t_ort);
  System.out.println("Ciftlerin toplami= " + c_toplam);
  System.out.println("Ciftlerin ortalamasi= " + c_ort);
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
namespace Istatistik{
    class Program{
        static void Main(string[] args){
            int i, t_adet = 0, c_adet = 0; // Değişkenlerin tanımlanması
            // Bölme işleminden reel sayı çıkabileceği için ortalama değişkenlerini float tanımladık 
            float t_toplam = 0, t_ort, c_toplam = 0, c_ort;
            for (i = 2; i < 100; i++){ // 2’den 100’a kadar döngünün oluşturulması
                if (i % 2 == 1){
                    t_adet++; // Tek sayılar adedinin artırılması
                    t_toplam = t_toplam + i; // Tek sayılar toplamına “i” değerinin eklenmesi
                }else{
                    c_adet++; // Çift sayılar adedinin artırılması
                    c_toplam = c_toplam + i; // Çift sayılar toplamına “i” değerinin eklenmesi
                }
            }
            // Ortalamaların hesaplanması "int/int=int" olduğu için "t_toplam, c_toplam" değişkenleri float tanımladık
            t_ort = t_toplam / t_adet;
            c_ort = c_toplam / c_adet;
            // Sonuçların yazdırılması
            Console.WriteLine(t_toplam);
            Console.WriteLine(t_ort);
            Console.WriteLine(c_toplam);
            Console.WriteLine(c_ort);
            Console.ReadLine();
        }
    }
}

```

<!-- ----------------------------- Akış Şeması ----------------------------------- -->

## 🧩 Akış Şeması

<img src="./IstatistikSema.png" width="200"  />

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
Teklerin toplami= 2499.0
Teklerin ortalamasi= 51.0
Ciftlerin toplami= 2450.0
Ciftlerin ortalamasi= 50.0
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. Bölme işleminden reel sayı çıkabileceği için ortalama değişkenlerini float tanımladık.
2. `int/int=int` olduğu için `t_toplam, c_toplam` değişkenleri float tanımladık.
3. Döngüden çıktıktan sonra ortalamaları hesapladık.