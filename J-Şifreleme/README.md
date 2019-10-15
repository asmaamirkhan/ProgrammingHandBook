# 🕶 Şifreleme Mantığı

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Girilen bir metin üzerinde aşağıdaki işlemleri yapan programı yazınız:
1. Metindeki harf sayısı ve rakam sayısını bulma.
2. Küçük harfleri büyük harflere ve rakamları `(yeni_rakam = 9 - rakam)`e göre çevirme.
3. Metnin son halini tersten yazdırma.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. Metni girmek.
2. Metin üzerinde işlemleri yapmak.
3. Sonuçları yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 
- Büyük harfi küçük harfe çevirmek için `küçük_ch = ch – 'A' + 'a'` eşitliği kullanılır
  - ASCII sayısal örnek:
``` 
        'h' = 'H' – 'A' + 'a'
        104 = 72 – 65 + 97
```   

- Küçük harfi büyük harfe çevirmek için `büyük_ch = ch – 'a' + 'A'` eşitliği kullanılır.
  - ASCII sayısal örnek:
``` 
        'H' = 'h' – 'a' + 'A'
        72 = 104 – 97 + 65
```   
- Bir dizinin tersten yazdırılması için, `for`un sayacı `dizinin uzunluğu-1`den başlar 0’a eşit olana kadar sürer.

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Metnin girilmesi.
3. Harfler dizisinin oluşturulması.
4. Metnin `string` den `char` dizisine çevrilmesi.
5. Metnin uzunluğu kadar dönen döngünün oluşturulması.
   - Karakterlerin kontrol edilmesi.
6. Sonuçların yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class Sifreleme {
 public static void main(String arg[]) {
  public static void main(String arg[]) {
   Scanner input = new Scanner(System.in);
   int i, harf_sayi = 0, rakam_sayi = 0; // 1. Adım
   String metin;
   metin = input.nextLine(); // 2. Adım
   char harfler[] = new char[metin.length()]; // 3. Adım
   harfler = metin.toCharArray(); // 4. Adım
   for (i = 0; i < metin.length(); i++) { // 5. Adım
    if (harfler[i] >= 'a' && harfler[i] <= 'z') { // 5. Adım (a)
     harfler[i] = (char)(harfler[i] - 'a' + 'A');
     harf_sayi++;
    } else
    if (harfler[i] >= 'A' && harfler[i] <= 'Z')
     harf_sayi++;
    else if (harfler[i] >= '0' && harfler[i] <= '9') {
     harfler[i] = (char)('9' - harfler[i] + '0');
     rakam_sayi++;
    }
   }
   System.out.println("Harf sayisi= " + harf_sayi); // 6. Adım
   System.out.println("Rakam sayisi= " + rakam_sayi);
   System.out.print(harfler[i]);
  }
 }
```

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->


## 🎉 Ekran Çıktısı

```
Harf sayisi= 4
Rakam sayisi= 3
$651 %^R ANQ
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. Dizinin uzunluğunu `.legnth()` fonksiyonunun yardımıyla elde ettik.
2. Metnin harflerini tek tek kontrol etmek için metni `char` dizisine atadık.
3. `char` tipi üzerinde yapılan matematiksel işlemlerin sonuçları `int` tipindedir, bu yüzden sonucu `char`a dönüştürdük.