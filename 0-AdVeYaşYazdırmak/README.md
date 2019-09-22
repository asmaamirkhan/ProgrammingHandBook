# Adı ve Hesaplanan Yaşı Yazdırmak

## ❓ Soru
Girilen isim ve doğum yılı bilgilerini alarak, isim ve yaş olarak ekrana görüntüleyen algoritmayı yazınız.

## ⛓ Program Kısımları
1. İsim ve doğum yılını okutmak.
2. Yaşı hesaplamak.
3. İsim ve yaşı ekrana yazdırmak.

## 👓 Çözüm Yöntemi 
* Yaşı hesaplamak için (2017 – doğum yılı) formülünü kullanırız.

## 👩‍🔧 Çözüm Adımları
1. “isim”in string olarak tanımlanması.
2. “yil”, “yas”, “buyil”ın tanımlanması.
3. “isim” ve “yil”ın girilmesi.
4. “yas”ın değerinin hesaplanması.
5. “isim” ve “yas”ın ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
public class yedinci_Program {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  String isim; // 1. Adım, I. nota bak
  int yil, yas, buyil = 2017; // 2. adım
  System.out.print("Isminizi giriniz: ");
  isim = input.nextLine(); // 3. adım
  System.out.print("Dogum yilinizi giriniz: ");
  yil = input.nextInt(); // 3. adım
  yas = buyil - yil; // 4. adım
  System.out.println("Isminiz: " + isim); // 5. adım
  System.out.println("Yasiniz: " + yas);
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
Isminizi giriniz: Muhammed
Dogum yilinizi giriniz: 1996
Isminiz: Muhammed
Yasiniz: 21
```

## 💡 Notlar 
1. İsim metin olduğu için, “isim” string olarak tanımlandı.
