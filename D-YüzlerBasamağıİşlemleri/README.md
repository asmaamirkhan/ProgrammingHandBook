# Yüzler Basamağı Üzerinde İşlemler Yapmak

## ❓ Soru
Tam kısmındaki değeri en fazla 4 haneli girilen bir rasyonel sayının tam kısmının yüzler hanesindeki değeri çift ise bu değerin küpünün bir tam kare olup olmadığını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayı girmek.
2. Koşulun sağlanıp sağlanmadığını kontrol etmek.
3. Sonucu ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Ondalık kısmını yok etmek için sayı `int`e dönüştürürüz.
- Yüzleri bulduktan sonra koşulu kontrol ederiz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `sayı`nın girilmesi.
3. `sayı`nın `int`’e dönüştürülmesi.
4. Yüzler basamağının bulunması.
5. Koşulun kontrol edilmesi.
6. Sonuçların yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>

```java
import java.util.*;
public class onaltinci_Program {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int tam_sayi, kalan = 0; // 1. adım
  float sayi;
  sayi = input.nextFloat(); // 2. adım
  tam_sayi = (int) sayi; // 3. adım
  tam_sayi = tam_sayi / 100; // 4. adım
  kalan = tam_sayi % 10;
  if (kalan % 2 == 0) { // 5. adım
   kalan = kalan * kalan * kalan;
   is_tam_kare(kalan);
  } else
   System.out.println("cift degil"); // 6. adım
  input.close();
 }
 private static void is_tam_kare(int x) { // I. nota bak
  int i, t = 0;
  for (i = 0; i <= x / 2 + 1; i++) {
   if (x == i * i) {
    t = 1;
    break;
   }
  }
  if (t == 1)
   System.out.println("tam kare"); // 6. adım
  else
   System.out.println("tam kare degil");
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```

```

## 💡 Notlar 
1. [Önceki](../C-TamKareSayılar) Sorunun yöntemini kullanarak sayının tam kare olup olmadığını kontrol eden bir fonksiyon oluşturduk.