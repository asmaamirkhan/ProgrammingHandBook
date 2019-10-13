# 🔢 Tam ve Ondalık Hane Sayısı

## ❓ Soru
Rastgele girilen bir rasyonel sayının ondalık kısmının ve tam kısmının hane sayısını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayı girmek.
2. Tam ve ondalık hane sayısını bulmak.
3. Sonuçları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Sayının tam kısmını elde etmek için rasyonel sayının değerini tam sayıya dönüştürerek yeni int değişkene atarız. `150.25 ---int---> 150`
- Sayının ondalık kısmını elde etmek için `sayi%10` sıfır olmadığı sürece hane sayacını artırıp sayıyı 10’la çarparız.
`32.46` ➡ `sayi%10!=0` ➡ `32.46*10` (1)
`324.6` ➡ `sayi%10!=0` ➡ `324.6*10` (2)
`3246` ➡ `sayi%10!=0` ➡ `3246*10` (3)
`32460` ➡ `sayi%10=0`
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `sayi`nın girilmesi.
3. `t_sayi`ya sayının tam değerinin atanması.
4. `t_sayi!=0` iken:
   - `t_sayi` 10’a bölüp `tam_h`nın artırılması
5. `sayi%10!=0` iken:
   - `sayi` 10’la çarpıp `ondalik_h`nın artırılması.
6. Sonuçların ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class HaneSayisi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int ondalik_h = 0, tam_h = 0, t_sayi; // 1. adım
  float sayi, sayi1;
  sayi = input.nextFloat(); // 2. adım
  sayi1 = sayi;
  t_sayi = (int) sayi; // 3. adım
  while (t_sayi != 0) { // 4. adım
   t_sayi = t_sayi / 10; // 4. adım (a)
   tam_h++; // 4. adım (a)
  }
  while (sayi % 10 != 0) // 5. adım
  {
   sayi = sayi * 10; // 5. adım (a)
   ondalik_h++; // 5. adım (a)
  }
  System.out.println("Tam kisminin hane sayisi= " + tam_h); // 6. adım
  if (sayi1 % 10 != 0)
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h - 1));
  else
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h)); // I. nota bak
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
150.25
Tam kisminin hane sayisi= 3
Ondalik kisminin hane sayisi= 2
```

## 💡 Notlar 
1. `sayı%10=0` olması için birlerin 0 olması lazım ama hane sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.