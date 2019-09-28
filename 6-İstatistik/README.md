# İstatistik

## ❓ Soru
1 ile 100 arasındaki tam sayılardan tek ve çift olanların ayrı ayrı toplamını ve ortalamasını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayının çift veya tek olduğunu kontrol etmek.
2. Tek ve çift sayıların toplamını ve ortalamasının ayrı ayrı hesaplamak.
3. Sonuçları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- “i%2” değerine göre sayının tek veya çift olduğunu tespit ederiz.
- (Ortalama = sayılar toplamı/ sayılar adedi) olduğu bellidir. Döngü içinde toplam değişkenini kullanarak sayıların toplamını elde ederiz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. 2’den 100’a kadar döngünün oluşturulması.
   - Koşulun kontrol edilmesi.
   - Önceki adım sonucuna göre (çift veya tek):
     - Sayılar adedinin artırılması.
     - Sayılar toplamına `i` değerinin eklenmesi.
3. Ortalamaların hesaplanması.
4. Sonuçların yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class Istatistik {
 public static void main(String arg[]) {
  int i, t_adet = 0, c_adet = 0; // 1. adım
  float t_toplam = 0, t_ort, c_toplam = 0, c_ort; // 1. nota bak
  for (i = 2; i < 100; i++) // 2. adım
  {
   if (i % 2 == 1) // 2. adım (a)
   {
    t_adet++; // 2. adım (b)
    t_toplam = t_toplam + i; // 2. adım (b)
   } else {
    c_adet++; // 2. adım (b)
    c_toplam = c_toplam + i; // 2. adım (b)
   }
  } 
  t_ort = t_toplam / t_adet; // 3. adım , 2. ve 3. nota bak
  c_ort = c_toplam / c_adet; // 3. adım
  System.out.println("Teklerin toplami= " + t_toplam); // 4. adım
  System.out.println("Teklerin ortalamasi= " + t_ort);
  System.out.println("Ciftlerin toplami= " + c_toplam);
  System.out.println("Ciftlerin ortalamasi= " + c_ort);
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
Teklerin toplami= 2499.0
Teklerin ortalamasi= 51.0
Ciftlerin toplami= 2450.0
Ciftlerin ortalamasi= 50.0
```

## 💡 Notlar 
1. Bölme işleminden reel sayı çıkabileceği için ortalama değişkenlerini float tanımladık.
2. `int/int=int` olduğu için `t_toplam, c_toplam` değişkenleri float tanımladık.
3. Döngüden çıktıktan sonra ortalamaları hesapladık.