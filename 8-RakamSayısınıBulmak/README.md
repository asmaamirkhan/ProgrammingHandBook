# Bir Sayının Rakamlarını Bulmak

## ❓ Soru
Üç haneli bir tamsayının birler, onlar ve yüzler hanesini bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. `x` değerini girmek.
2. Birler, onlar ve yüzler basamaklarını bulmak.
3. Bulunanları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Bir sayının birleri: sayının 10’a bölündüğünden kalandır.
`Örnek: x= 285, x%10= 5`
- Önceki adıma göre; Sayının onlar basamağını bulmak için onlar basamağını birler basamağına dönüştürmek gerek. Bunu yapmak için `x`i 10’a böleriz. Benzer şekilde sayının tüm hanelerini bulabiliriz.
`Örnek: x= 285 ----/10-----> x= 28 ----/10-----> x= 2`
  
## 👩‍🔧 Çözüm Adımları
1. `x` ve `i`nin tanımlanması.
2. `x`in girilmesi.
3. 3 kere dönen döngünün oluşturulması.
   - Kalanın yazdırılması.
   - `x`in onlar basamağının birler basamağına dönüştürülmesi.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class RakamSayisi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int x, i; // 1. adım
  System.out.println("3 haneli sayi giriniz:");
  x = input.nextInt(); // 2. adım
  for (i = 0; i < 3; i++) // 3. adım
  {
   System.out.println(x % 10); // 3. adım (a)
   x = x / 10; // 3. adım (b), I. nota bak
  }
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
3 haneli sayi giriniz:
235
5
3
2
```

## 💡 Notlar 
1. `int/int=int` olduğu bellidir.
   - Örnek: 159/10=15 (kalan ihmal edildi).