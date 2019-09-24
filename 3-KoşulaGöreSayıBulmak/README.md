# Verilen Koşula Göre Sayıların Sayısını Bulmak

## ❓ Soru
1 ile 100 arasındaki tamsayılardan 2 katının 1 fazlası, 5 ile tam bölünen kaç sayı olduğunu
bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Verilen koşulu sağlayan sayıların sayısını bulmak.
2. Sonucu ekrana yazdırmak.
   
## 👓 Çözüm Yöntemi 
- Bir döngü kullanarak 1,100 arasındaki tüm sayıların koşulu sağlayıp sağlamadığını kontrol ederiz.
- Koşul her sağlandığında “adet” sayacı artacak.
  
## 👩‍🔧 Çözüm Adımları
1. “i” ve “adet”in tanımlanması.
2. 2’den 99’a kadar döngünün oluşturulması.
   * Koşulun kontrol edilmesi.
3. “adet”in ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class KosulaGoreSayiBulmak {
 public static void main(String arg[]) {
  int i, adet = 0; // 1. adım
  for (i = 2; i < 100; i++) // 2. adım, I. nota bak
   if ((i * 2 + 1) % 5 == 0) // 2. adım (a)
    adet++;
  System.out.println("Adet= " + adet); // 3. adım
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
Adet= 20
```

## 💡 Notlar 
1. Soruda 1 ile 100 dahil olduğu belirtilmediği için sayılar dahil edilmedi. 
