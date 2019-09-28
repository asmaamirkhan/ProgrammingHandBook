# Onluk Tabanından İkilik Tabana Çevirme

## ❓ Soru
10’luk sayı sistemindeki bir sayıyı 2’lik sayı sistemine çeviren algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayı girmek.
2. Çevirme işlemini yapmak.
3. Sonucu ekrana yazdırmak.

## 👓 Çözüm Yöntemi 
- 10’luk sayı sisteminden 2’lik sayı sistemine bir sayı dönüştürmek için basamak değerlerini tek tek hesaplarız. Her basamak değerini hesaplamak için döngümüzde iki adım var:
  - `Sayı%2`yi hesaplayıp 10(i) ile çarparız; `i` 0’dan başlayıp basamağa göre artar.
  - Sayıyı 2’ye böleriz.
- Çevrilen sayıyı bulmak için her basamak değerinin hesaplandığında önceki hesaplanana ekleriz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Sayının girilmesi.
3. `sayi>0` iken:
   - Çevirme işleminin yapılması.
4. Çevrilen sayının ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class TabanCevirme {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int sayi, s = 0, i = 0, basamak; // 1. adım
  sayi = input.nextInt(); // 2. adım
  while (sayi > 0) // 3. adım
  {
   basamak = (int)((sayi % 2) * Math.pow(10, i)); // 3. adım (a), I. nota bak
   i++;
   sayi = sayi / 2;
   s = s + basamak;
  }
  System.out.println(s); // 4. adım
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
67
1000011
```

## 💡 Notlar 
1. Sayının kuvvetini almak için `Math.pow(taban, kuvvet)` hazır fonksiyonunu kullandık.