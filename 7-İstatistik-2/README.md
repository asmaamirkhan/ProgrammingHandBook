# İstatistik 2

## ❓ Soru
Girilen 20 adet sayıyı alarak; 
1. Sayıların ortalamasını. 
2. En büyük ve en küçük sayıları bulan. 
3. Pozitif sayıların ortalamasını bulan. 
4. 100-200 arasındaki sayıların sayısını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. 20 sayı girmek.
2. İstenenleri hesaplamak.
3. Sonuçları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Bir sayının pozitif olup olmadığını tespit etmek için 0’dan olup olmadığını kontrol etmek gerek.
- Bir sayının 100 ile 200 arasında olup olmadığını tespit etmek için, sayı >100 ve aynı anda sayı <200 olup olmadığını kontrol etmek gerek.
  
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

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class birinci_Program {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int adet = 20, x, buyuk, kucuk, i, p = 0, j = 0;
  float ort = 0, p_ort = 0; // 1. adım
  x = input.nextInt(); // 2. adım
  buyuk = x;
  kucuk = x;
  if (x > 0) { // 3. adım
   p_ort = p_ort + x;
   p++;
  }
  if (x > 100 && x < 200) // 3. adım
   j++;
  ort = ort + x;
  for (i = 0; i < adet - 1; i++) { // 4. adım
   x = input.nextInt(); // 4. adım (a)
   if (x > 0) { // 4. adım (b)
    p_ort = p_ort + x;
    p++;
   }
   if (x > 100 && x < 200) // 4. adım (c)
    j++;
   if (x > buyuk) // 4. adım (d)
    buyuk = x;
   if (x < kucuk) // 4. adım (d)
    kucuk = x;
   ort = ort + x;
  } // 4. adım (e)
  ort = ort / adet; // 5. adım
  p_ort = p_ort / p; // 5. adım
  System.out.println("Ortalama= " + ort); // 6. adım
  System.out.println("En buyuk sayi= " + buyuk);
  System.out.println("En kucuk sayi= " + kucuk);
  System.out.println("Pozitif olanlarin ortalamasi= " + p_ort);
  System.out.println("100-200 arasindaki sayilarin sayisi= " + j);
  input.close();
 }
}
```
</details>


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

