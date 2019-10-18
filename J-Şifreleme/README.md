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
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
using namespace std;
int main() {
    // Değişkenlerin tanımlanması
    int i, harf_sayi = 0, rakam_sayi = 0;
    string metin;
    getline(cin, metin); // Metnin girilmesi
    cout << metin;
    // Metnin uzunluğu kadar dönen döngünün oluşturulması
    for (i = 0; i < metin.length(); i++) {
        // Karakterlerin kontrol edilmesi.   
        if (metin[i] >= 'a' && metin[i] <= 'z') {
            metin[i] = (char)(metin[i] - 'a' + 'A');
            harf_sayi++;
        } else
        if (metin[i] >= 'A' && metin[i] <= 'Z')
            harf_sayi++;
        else if (metin[i] >= '0' && metin[i] <= '9') {
            metin[i] = (char)('9' - metin[i] + '0');
            rakam_sayi++;
        }
    }
    // Sonuçların yazdırılması
    cout << "Harf sayisi= " << harf_sayi << endl;
    cout << "Rakam sayisi= " << rakam_sayi << endl;
    for (i = metin.length() - 1; i >= 0; i--)
        cout << metin[i];
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
harf_sayi = 0; rakam_sayi = 0 # Değişkenlerin tanımlanması
metin = list(str(input())) # Metnin girilmesi
# Metnin uzunluğu kadar dönen döngünün oluşturulması
for karakter in metin:
    # Karakterlerin kontrol edilmesi.   
    if karakter >= 'a' and karakter <= 'z': 
        karakter = chr(ord(karakter) - ord('a') + ord('A'))
        harf_sayi += 1
    elif karakter >= 'A' and karakter <= 'Z':
        harf_sayi += 1
    elif karakter >= '0' and karakter <= '9': 
        karakter = chr(ord('9') - ord(karakter) + ord('0'))
        rakam_sayi += 1
        
# Sonuçların yazdırılması
print("Harf sayisi= ", harf_sayi) 
print("Rakam sayisi= ", rakam_sayi)
sonuc = ''.join(metin)
print(sonuc[::-1])
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class Sifreleme {
  public static void main(String arg[]) {
   Scanner input = new Scanner(System.in);
   // Değişkenlerin tanımlanması
   int i, harf_sayi = 0, rakam_sayi = 0;
   String metin;
   metin = input.nextLine(); // Metnin girilmesi
   char harfler[] = new char[metin.length()]; // Harfler dizisinin oluşturulması
   harfler = metin.toCharArray(); // Metnin string’den char dizisine çevrilmesi
   // Metnin uzunluğu kadar dönen döngünün oluşturulması
   for (i = 0; i < metin.length(); i++) { 
    // Karakterlerin kontrol edilmesi.   
    if (harfler[i] >= 'a' && harfler[i] <= 'z') {
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
   // Sonuçların yazdırılması
   System.out.println("Harf sayisi= " + harf_sayi); 
   System.out.println("Rakam sayisi= " + rakam_sayi);
   for(i = metin.length()-1; i>=0; i--)
			System.out.print(harfler[i]);
  }
 }
```

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->


## 🎉 Ekran Çıktısı

```
QNa r^% 843$
Harf sayisi= 4
Rakam sayisi= 3
$651 %^R ANQ
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. Dizinin uzunluğunu `.legnth()` fonksiyonunun yardımıyla elde ettik.
2. Metnin harflerini tek tek kontrol etmek için metni `char` dizisine atadık.
3. `char` tipi üzerinde yapılan matematiksel işlemlerin sonuçları `int` tipindedir, bu yüzden sonucu `char`a dönüştürdük.