# En Yakın Sayıyı Bulmak

## ❓ Soru
Arka arkaya girilen 10 sayıdan istenilen bir sayıya en yakın olan sayıyı bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. İstenilen sayıyı girmek.
2. 10 tane değer girmek.
3. En yakın değeri bulmak.
4. En yakın değeri ekrana yazdırmak.

## 👓 Çözüm Yöntemi 
- Yakınlık `(a ,b) = |a-b|` olduğu bellidir.
- Her değer girildiğinde yakınlığını hesaplayıp önceki yakınlıkla karşılaştırırız.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `sayi`nın girilmesi.
3. İlk `x` değerinin girilmesi.
4. İlk değere göre değişkenlere değer atanması.
5. (10-1) kere dönen döngünün oluşturulması.
   - `x`in girilmesi.
   - Koşullar kontrol edilirken `yakinlik` ve `enyakin` değerlerin değiştirilmesi.
6. Sonuçların yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class YakiniBulmak {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int x, sayi, yakinlik, enyakin, i; // 1. adım
  int enyakin2 = 0, yakinlik2 = -1;
  sayi = input.nextInt(); // 2. adım
  x = input.nextInt(); // 3. adım
  enyakin = x; // 4. adım
  yakinlik = Math.abs(x - sayi);
  for (i = 0; i < 9; i++) { // 5. adım
   x = input.nextInt(); // 5. adım (a)
   if (Math.abs(x - sayi) < yakinlik) { // 5. adım (b)
    yakinlik = Math.abs(x - sayi);
    enyakin = x;
   } else if (Math.abs(x - sayi) == yakinlik) { // I. nota bak
    if (x != enyakin) {
     yakinlik2 = yakinlik;
     enyakin2 = x;
    }
   }
  }
  if (yakinlik2 == yakinlik) // II. nota bak
   System.out.println("Diger en yakin sayi= " + enyakin2); // 6. adım
  System.out.println("En yakin sayi= " + enyakin);
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
5
1   9   0   88  3   4   2   2   11  10
En yakin sayi= 4
```

## 💡 Notlar 
1. Bir yakınlık önceki yakınlığa eşitse 2 durum olabilir:
   - `Yakınlık(2) = yakınlık(1)` ise:
     - Ya : `sayı(2) = sayı(1)` ➡ `sayı` tekrarlı.
     - Ya da: sayı `(2) = 2*x – sayı(1)` ➡ sayıların ikisi aynı yakınlıkta, `sayı(2)` değerini `enyakın2` değişkenine atarız.
2. Döngüden çıktıktan sonra `yakinlik = yakinlik2` ise aynı yakınlıkta iki sayı bulunmuş olur, dolayısıyla ikisini yazdırmalıyız.