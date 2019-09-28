# Asal Sayılar

## ❓ Soru
10 ile 200 arasındaki tamsayılardan asal sayı olanları bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. 10 ile 200 arasındaki sayıları kontrol ederek asal olanları bulmak.
2. Asal olanları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Asal sayı: Yalnız bir ve kendisi ile bölünebilen birden büyük doğal sayıdır.
- Bir `i` sayısı asal olup olmadığını tespit etmek için `x=2`den `x=i-1`e kadar artan bir sayaç oluştururuz. `x` sayının bir böleni olup olmadığını kontrol ederiz.
  
## 👩‍🔧 Çözüm Adımları
1. `i`, `x`, “j”nin tanımlanması.
2. 11’den 99’a kadar döngünün oluşturulması.
   - `x` ile `j`ye başlangıç değerinin atanması
   - `x` ile `i/2+1` eşit olmadığı sürece:
     - `x`in `i`nin bir böleni olup olmadığının kontrol edilmesi.
   - Asal sayıların ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class Asal {
 public static void main(String arg[]) {
  int i, x, j; // 1. adım
  for (i = 11; i < 100; i++) // 2. adım
  {
   x = 2;
   j = 0; // 2. adım (a)
   while (x != i / 2 + 1) // 2. adım (b) II. nota bak
   {
    if (i % x == 0) // 2. adım (b)(-)
    {
     j = 1;
     break; // I. nota bak
    } else x++;
   }
   if (j == 0)
    System.out.println(i); // 2. adım (c)
  }
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
11  13  17  19  23
29  31  37  41  43
47  53  59  61  67
71  73  79  83  89
97
```

## 💡 Notlar 
1. En az bir bölen bulunursa sayının asal olmadığını öğrenmek için yeterlidir. O yüzden sonraki değerleri kontrol etmeden döngüden çıkılır.
2. `x` değeri hiçbir zaman `(i/2+1)` değeri ile `i`yi bölemez. Bu yüzden bu değerin `(i/2+1)` üstünü kontrol etmeye gerek yoktur. Örnek: `i= 10` için `10/2+1` değeri hiçbir zaman 10’u tam bölemez. Diğer sayıları da buna kıyas edebiliriz.