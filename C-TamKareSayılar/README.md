# Tam Kare Sayılar

## ❓ Soru
Girilen bir tamsayının tam kare olup olmadığını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayı girmek.
2. Tam kare olup olmadığını tespit etmek.
3. Sonucu ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Bir `x` sayısı tam kare olması için `(x=i*i)` koşulunu sağlayan bir `i` bulunması lazım.
- `i`yi bulmak için 0 ile `(x/2+1)` arasındaki sayıları kontrol ederiz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `x`in girilmesi.
3. `(x/2+1)` kere dönen döngünün oluşturulması.
a- Koşulun kontrol edilmesi.
4. Sonucun yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class ondorduncu_Program {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int i, x, t = 0; // 1. adım
  x = input.nextInt(); // 2. adım
  for (i = 0; i <= x / 2 + 1; i++) // 3. adım
  {
   if (x == i * i) // 3. adım (a)
   {
    t = 1;
    break; // I. nota bak
   }
  }
  if (t != 0) // II. nota bak
   System.out.println("tam kare"); // 4. adım
  else
   System.out.println("tam kare degil");
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
81
tam kare
27
tam kare degil
```

## 💡 Notlar 
1. Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
2. Koşulun sağlanıp sağlanmadığını kontrol etmek için `t`yi kullandık, çünkü koşul sağlandığında `t` değişecek.