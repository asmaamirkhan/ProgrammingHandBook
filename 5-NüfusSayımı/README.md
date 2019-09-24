# Nüfus Sayımı İstatistikleri

## ❓ Soru
Şanlıurfa’nın nüfusu 500.000, Gaziantep’in nüfusu 900.000’dir. Doğumlardan ve göçlerden dolayı Şanlıurfa’nın nüfusu yılda %2.5 ve Gaziantep’in nüfusu ise yılda %1.4 oranında artıyor. Buna göre Şanlıurfa’nın nüfusunun kaç yıl sonra Gaziantep’in nüfusunu geçeceğini
bulan ve o andaki nüfuslarını hesaplayan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Şanlıurfa’nın nüfusunun kaç yıl sonra Gaziantep’in nüfusunu geçeceğini ve geçtiği yıldaki nüfusu hesaplamak.
2. Sonuçları ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- `sa_nu`nun `ga_nu`dan küçük olduğu sürece oranı kullanarak yeni nüfusu hesaplayan ve yılı artıran bir döngü oluştururuz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `(sa_nu<=ga_nu)` iken:
   1. Nüfusların yeniden hesaplanması.
   2. “yil” sayacının artırılması.
3. Sonuçların ekrana yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
public class NufusSayimi {
 public static void main(String arg[]) {
  int yil = 0, sa_nu = 500000, ga_nu = 900000; // 1.adım
  while (sa_nu <= ga_nu) // 2. adım
  {
   sa_nu = (int)(sa_nu + (sa_nu * 2.5 / 100)); // 2. adım(a), I.nota bak
   ga_nu = (int)(ga_nu + (ga_nu * 1.4 / 100));
   yil++; // 2. Adım (b)
  }
  System.out.println(yil + " yil sonra Sanliurfa nufusu "+sa_nu+" olacak "); // 3. adım
  }
 }
```
</details>


## 🎉 Ekran Çıktısı

```
55 yil sonra Sanliurfa nufusu 194432 olacak
```

## 💡 Notlar 
1. Nüfus sayısını rasyonel sayıyla çarptığımız için sonuç da rasyonel oldu. O yüzden sayıyı `int`e dönüştürmek zorunda kaldık.