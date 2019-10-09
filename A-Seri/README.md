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

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

<details>
<summary><b>C++ Kodu</b> </summary>

```cpp
#include <iostream>
#include <string>

using namespace std;
float faktoriyel(int a) { 
    int f = 1, i;
    for (i = 2; i <= a; i++)
        f = f * i;
    return f;
}

int main()
{
    // “n” ve “i”nin tanımlanması.
    int n = 10, i;
    // “toplam”ın float (reel) tanımlanması
    float toplam = 0;
    // 1’den 10’a kadar döngünün oluşturulması
    for (i = 1; i <= 10; i++) 
    {
        // “i”ye göre terim değerinin hesaplanıp önceki toplama eklenmesi
        toplam = toplam + (i + (n - i) / faktoriyel(i)); 
    }
    // Formül sonucunun ekrana yazdırılması
    cout << toplam; 
 }

```
</details>

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

<details>
<summary><b>Java Kodu</b></summary>

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

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C# Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

<details>
<summary><b>C# Kodu</b></summary>

```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Seri
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 10, i;
            float toplam = 0;
            for (i = 1; i <= 10; i++)
            {
                toplam = toplam + (i + (n - i) / faktoryel(i));
            }
            Console.WriteLine(toplam);
            Console.ReadLine();
        }
        public static float faktoryel(int a)
        {
            int f = 1, i;
            for (i = 2; i <= a; i++)
                f = f * i;
            return f;
        }
 
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