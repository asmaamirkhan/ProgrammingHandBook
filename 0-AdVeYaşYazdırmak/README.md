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
1. `isim`in string olarak tanımlanması.
2. `yil`, `yas`, `buyil`ın tanımlanması.
3. `isim` ve `yil`ın girilmesi.
4. `yas`ın değerinin hesaplanması.
5. `isim` ve `yas`ın ekrana yazdırılması.

## 🤖 Kod


[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

<details>
<summary><b>C++ Kodu</b></summary>

```cpp
#include <iostream>
#include <string>

using namespace std;
int main()
{
    // “isim”in string olarak tanımlanması
    string isim;
    // “yil”, “yas”, “buyil”ın tanımlanması
    int yil, yas, buyil = 2017; 
    // “isim” ve “yil”ın girilmesi
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << "Dogum yilinizi giriniz: ";
    cin >> yil;
    // “yas”ın değerinin hesaplanması
    yas = buyil - yil;
    // “isim” ve “yas”ın ekrana yazdırılması
    cout << "Isminiz: " << isim <<  "Yasiniz: " << yas ; 
    return 0;
}

```
</details>


[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

<details>
<summary><b>Java Kodu</b></summary>

```java
import java.util.*;
public class AdVeYasYazdirmak {
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

namespace yedinci_Program
{
    class Program
    {
        static void Main(string[] args)
        {
            String isim;
            int yil, yas, buyil = 2017;
            Console.WriteLine("Isminizi giriniz: ");
            isim = Console.ReadLine();
            Console.WriteLine("Dogum yilinizi giriniz: ");
            yil = Convert.ToInt32(Console.ReadLine());
            yas = buyil - yil;
            Console.WriteLine("Isminiz: " + isim);
            Console.WriteLine("Yasiniz: " + yas);
            Console.ReadLine();
        }
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
1. İsim metin olduğu için, `isim` string olarak tanımlandı.
