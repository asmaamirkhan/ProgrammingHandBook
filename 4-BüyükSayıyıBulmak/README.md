# En Büyük Sayıyı Bulmak 

## ❓ Soru
Girilen 10 tamsayıdan en büyüğünü bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. 10 tane sayı girmek.
2. Girilenlerin en büyüğünü bulmak.
3. En büyüğünü ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- 10 kere dönen döngüyle sayıları okutabiliriz. Bunun için tek bir değişken `sayi` kullanmamız yeterli.
- En büyük sayıyı tespit etmek için, ilk girilenin en büyük sayı olduğunu farz ederiz.
`(“buyuk” = ilk girilen sayı)`
- Sonraki girilenler `buyuk`ten büyükse değerini değiştiririz.
  
## 👩‍🔧 Çözüm Adımları
1. `sayi`, `buyuk`, `i`nin tanımlanması.
2. İlk sayının döngüye girmeden kullanıcıdan girilmesi.
3. Girilen sayının `buyuk`e atanması.
4. `10-1` kere dönen döngünün oluşturulması.
   1. Sayıların girilmesi.
   2. Sayının `buyuk`le karşılaştırılması.
5. `buyuk`ün ekrana yazdırılması. 

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class BuyukSayiyiBulmak {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int sayi, i, buyuk; // 1. adım
  System.out.println("10 Sayi giriniz:");
  sayi = input.nextInt(); // 2. adım
  buyuk = sayi; // 3. adım, 1. nota bak
  for (i = 0; i < 9; i++) // 4. adım
  {
   sayi = input.nextInt(); // 4. adım (1)
   if (sayi > buyuk) // 4. adım (2)
    buyuk = sayi;
  }
  // 5. adım
  System.out.println("En Buyuk sayi= " + buyuk);
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
10 Sayi giriniz:
1 10 3 7 4 8 2 3 56 3
En Buyuk sayi= 56
```

## 💡 Notlar 
1. `buyuk`e başlangıç değeri atamak için döngüye girmeden önce ilk sayıyı okutup `buyuk`e atarız.