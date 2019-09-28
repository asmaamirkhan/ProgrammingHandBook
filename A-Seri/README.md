# Bir Seri Değerini Hesaplamak

## ❓ Soru
Aşağıda verilen işlemin sonucunu N=10 değeri için hesaplayan algoritmayı yazınız.

<img src="../res/SeriFormulu.png" height="75"  />

## ⛓ Program Kısımları
1. N değerini formüle yerleştirerek sonucu elde etmek.
2. Hesaplanan toplamın sonucunu ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Formülde görüldüğu gibi, `n` değeri sabit, `i` artıyor.
- `i`nin değişmesini sağlamak için 10 kere dönen bir döngü kullanırız. Döngü her döndüğünde `i`yi artırıp formüle yerleştiririz.
  
## 👩‍🔧 Çözüm Adımları
1. `n` ve `i`nin tanımlanması.
2. “toplam”ın float (reel) tanımlanması.
3. 1’den 10’a kadar döngünün oluşturulması.
a- `i`ye göre terim değerinin hesaplanıp önceki toplama eklenmesi.
4. Formül sonucunun ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class Seri {
 public static void main(String arg[]) {
  int n = 10, i; // 1. adım
  float toplam = 0; // 2. adım
  for (i = 1; i <= 10; i++) // 3. adım
  {
   toplam = toplam + (i + (n - i) / faktoriyel(i)); // 3. adım (a)
  }
  System.out.println(toplam); // 4. adım
 }
 public static float faktoriyel(int a) { // 1. nota bak
  int f = 1, i;
  for (i = 2; i <= a; i++)
   f = f * i;
  return f;
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
69.46454
```

## 💡 Notlar 
1. Fonksiyon kavramını kullanarak önceki örnekte gördüğümüz faktöriyel hesaplama algoritmasını `faktoriyel(int a)` fonksiyonu içinde yazdık.