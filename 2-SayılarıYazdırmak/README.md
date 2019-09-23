# Sayıları Yan Yana Yazdırmak

## ❓ Soru
500’den 100’e kadar olan sayıları ekrana yan yana yazan algoritmayı yazınız.

## ⛓ Program Kısımları
1. 500’den 100’e kadar olan sayıları ekrana yazdırmak.

## 👓 Çözüm Yöntemi 
- Yazdırılacak sayıları bulmak için değeri 500’dan başlayan 100’a kadar azalan bir sayaç oluşturuyoruz, sayacın her azaldığında onun değerini ekrana yazdırıyoruz.
  
## 👩‍🔧 Çözüm Adımları
1. “i”nin tanımlanması.
2. Sayacın değerini azaltan bir döngünün oluşturulması.
   * Sayacın değerinin yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class SayilariYazdirmak {
 public static void main(String arg[]) {
  int i; // 1. Adım
  for (i = 500; i >= 100; i--) // 2. Adım
   System.out.print(i + " - "); // 2. adım (*), I. Nota bak
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
500 - 499 – 498 - …………… 
…………… - 102 - 101 - 100 -
```

## 💡 Notlar 
1. Değerleri ayırmak için (" - ") yazdırdık.
