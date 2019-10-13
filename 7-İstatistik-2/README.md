# İstatistik 2

<!-- ----------------------------- Soru  ----------------------------------- -->

## ❓ Soru
Girilen 20 adet sayıyı alarak; 
1. Sayıların ortalamasını. 
2. En büyük ve en küçük sayıları bulan. 
3. Pozitif sayıların ortalamasını bulan. 
4. 100-200 arasındaki sayıların sayısını bulan algoritmayı yazınız.

<!-- ----------------------------- Program Kısımları  ----------------------------------- -->

## ⛓ Program Kısımları
1. 20 sayı girmek.
2. İstenenleri hesaplamak.
3. Sonuçları ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi  ----------------------------------- -->
   
## 👓 Çözüm Yöntemi 
- Bir sayının pozitif olup olmadığını tespit etmek için 0’dan olup olmadığını kontrol etmek gerek.
- Bir sayının 100 ile 200 arasında olup olmadığını tespit etmek için, sayı >100 ve aynı anda sayı <200 olup olmadığını kontrol etmek gerek.

<!-- ----------------------------- Çözüm Adımları  ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. İlk `x` değerinin döngüye girmeden girilmesi.
3. Değişkenlere koşullar kontrol edilerek değer atanması.
4. `adet-1` kere dönen döngünün oluşturulması.
   - `x` değerinin döngüde girilmesi.
   - Pozitif sayıların tespit edilmesi.
   - `100<x<200` koşulunun kontrol edilmesi.
   - `x>buyuk` ve `x<kucuk` koşulunun kontrol edilmesi.
   - `x` değerinin `ort`a eklenmesi.
5. Ortalamaların hesaplanması.
6. Sonuçların yazdırılması.

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
	// Değişkenlerin tanımlanması
	int i, enBuyuk, enKucuk, pozitifSayılarToplamı = 0, pozitifSayilarAdet = 0, sayilarToplami = 0;
	int yuzIkiYuzArasında = 0, sayi;
	float ort, pozitifOrt;
	cin >> sayi; // İlk değerin döngüye girmeden girilmesi
	enBuyuk = sayi;
	enKucuk = sayi;
	// Değişkenlere koşullar kontrol edilerek değer atanması
	if(sayi > 0){
		pozitifSayilarAdet++;
		pozitifSayılarToplamı += sayi;
	}
	if(sayi > 100 && sayi < 200)
		yuzIkiYuzArasında++;
	sayilarToplami += sayi;
	for (i = 0; i < adet - 1; ++i) { // “adet-1” kere dönen döngünün oluşturulması
		cin >> sayi; // “sayi” değerinin döngüde girilmesi
		sayilarToplami += sayi; // “sayi” değerinin “sayilarToplami”a eklenmesi
		// “sayi>enBuyuk” ve “sayi<enKucuk” koşulunun kontrol edilmesi
		if (sayi > enBuyuk)
			enBuyuk = sayi;
		else if (sayi < enKucuk)
			enKucuk = sayi;
		if (sayi > 0) { // Pozitif sayıların tespit edilmesi
			pozitifSayılarToplamı += sayi;
			pozitifSayilarAdet++;
		}
		if (sayi > 100 && sayi < 200) // 100<x<200 koşulunun kontrol edilmesi
			yuzIkiYuzArasında++;
	}
	// Ortalamaların hesaplanması
	ort = sayilarToplami / adet;
	pozitifOrt = pozitifSayılarToplamı / pozitifSayilarAdet
	// Sonuçların yazdırılması
	cout << "Ortalama = " << ort << '\n';
	cout << "En buyuk sayi = " << enBuyuk << '\n';
	cout << "En kucuk sayi = " << enKucuk << '\n';
	cout << "Pozitif olanlarin ortalamasi = " << pozitifOrt << '\n';
	cout << "100-200 arasindaki sayilarin sayisi = " << yuzIkiYuzArasında << '\n';
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
# Değişkenlerin tanımlanması.
adet = 20; x = 0; buyuk = 0; kucuk = 0; i = 0
p = 0; j = 0; ort = 0; p_ort = 0
x = int(input())# İlk “x” değerinin döngüye girmeden girilmesi
buyuk = x
kucuk = x
# Değişkenlere koşullar kontrol edilerek değer atanması
if (x > 0):
    p_ort = p_ort + x
    p += 1
if (x > 100 and x < 200) :
      j += 1
      ort = ort + x
for i in range(0,adet-1): # “adet-1” kere dönen döngünün oluşturulması
    x = int(input()) # “x” değerinin döngüde girilmesi
    if(x > 0): # Pozitif sayıların tespit edilmesi
        p_ort = p_ort + x
        p += 1
    if(x > 100 and x >200): # 100<x<200 koşulunun kontrol edilmesi
        j += 1
    # “x>buyuk” ve “x<kucuk” koşulunun kontrol edilmesi.
    if(x > buyuk):
        buyuk = x
    if(x < kucuk):
        kucuk = x
    ort = ort + x # “x” değerinin “ort”a eklenmesi.
# Ortalamaların hesaplanması
ort = ort / adet
p_ort = p_ort / p
# Sonuçların yazdırılması
print("Ortalama= ",ort)
print("En buyuk sayi= ",buyuk)
print("En kucuk sayi= ",kucuk)
print("Pozitif olanlarin ortalamasi= ",p_ort)
print("100-200 arasindaki sayilarin sayisi= ",j)
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class Istatistik2 {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  // Değişkenlerin tanımlanması
  int adet = 20, x, buyuk, kucuk, i, p = 0, j = 0;
  float ort = 0, p_ort = 0;
  x = input.nextInt(); // İlk “x” değerinin döngüye girmeden girilmesi
  buyuk = x;
  kucuk = x;
  // Değişkenlere koşullar kontrol edilerek değer atanması
  if (x > 0) { 
   p_ort = p_ort + x;
   p++;
  }
  if (x > 100 && x < 200) 
   j++;
  ort = ort + x;
  for (i = 0; i < adet - 1; i++) { // “adet-1” kere dönen döngünün oluşturulması
   x = input.nextInt(); // “x” değerinin döngüde girilmesi
   if (x > 0) {  // Pozitif sayıların tespit edilmesi
    p_ort = p_ort + x;
    p++;
   }
   if (x > 100 && x < 200) // 100<x<200 koşulunun kontrol edilmesi
    j++;
   if (x > buyuk) // “x>buyuk” ve “x<kucuk” koşulunun kontrol edilmesi
    buyuk = x;
   if (x < kucuk)
    kucuk = x;
   ort = ort + x; // “x” değerinin “ort”a eklenmesi.
  } 
  // Ortalamaların hesaplanması
  ort = ort / adet; 
  p_ort = p_ort / p; 
  // Sonuçların yazdırılması
  System.out.println("Ortalama= " + ort);
  System.out.println("En buyuk sayi= " + buyuk);
  System.out.println("En kucuk sayi= " + kucuk);
  System.out.println("Pozitif olanlarin ortalamasi= " + p_ort);
  System.out.println("100-200 arasindaki sayilarin sayisi= " + j);
  input.close();
 }
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⏹ C# Kodu

```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Istatistik2{
    class Program{
        static void Main(string[] args){
            // Değişkenlerin tanımlanması
            int adet = 20, x, buyuk, kucuk, i, p = 0, j = 0;
            float ort = 0, p_ort = 0;
            x = Convert.ToInt32(Console.ReadLine());  // İlk “x” değerinin döngüye girmeden girilmesi
            buyuk = x;
            kucuk = x;
            // Değişkenlere koşullar kontrol edilerek değer atanması
            if (x > 0){
                p_ort = p_ort + x;
                p++;
            }
            if (x > 100 && x < 200)
                j++;
            ort = ort + x;
            for (i = 0; i < adet - 1; i++){ // “adet-1” kere dönen döngünün oluşturulması
                x = Convert.ToInt32(Console.ReadLine()); // “x” değerinin döngüde girilmesi
                if (x > 0){ // Pozitif sayıların tespit edilmesi
                    p_ort = p_ort + x;
                    p++;
                }
                if (x > 100 && x < 200) // 100<x<200 koşulunun kontrol edilmesi
                    j++;
                // “x>buyuk” ve “x<kucuk” koşulunun kontrol edilmesi
                if (x > buyuk)
                    buyuk = x;
                if (x < kucuk)
                    kucuk = x;
                ort = ort + x; // “x” değerinin “ort”a eklenmesi.
            }
            // Ortalamaların hesaplanması
            ort = ort / adet;
            p_ort = p_ort / p;
            // Sonuçların yazdırılması
            Console.WriteLine(ort);
            Console.WriteLine(buyuk);
            Console.WriteLine(kucuk);
            Console.WriteLine(p_ort);
            Console.WriteLine(j);
            Console.ReadLine();
        }
    }
}

```

<!-- ----------------------------- Akış Şeması ----------------------------------- -->

## 🧩 Akış Şeması

<img src="./Istatistik2Sema.png" width="200"  />

<!-- ----------------------------- Ekran Çıktısı  ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
1   3   55  88  6
5   4   1   4   7
9   0   77  5   6
4   6   -3  -6  45

Ortalama= 15.85
En buyuk sayi= 88
En kucuk sayi= -6
Pozitif olanlarin ortalamasi= 19.17647
100-200 arasindaki sayilarin sayisi= 0
```