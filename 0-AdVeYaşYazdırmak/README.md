# Adı ve Hesaplanan Yaşı Yazdırmak

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Girilen isim ve doğum yılı bilgilerini alarak, isim ve yaş olarak ekrana görüntüleyen algoritmayı yazınız.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. İsim ve doğum yılını okutmak.
2. Yaşı hesaplamak.
3. İsim ve yaşı ekrana yazdırmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 
* Yaşı hesaplamak için (2017 – doğum yılı) formülünü kullanırız.

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->

## 👩‍🔧 Çözüm Adımları
1. `isim`in string olarak tanımlanması.
2. `yil`, `yas`, `buyil`ın tanımlanması.
3. `isim` ve `yil`ın girilmesi.
4. `yas`ın değerinin hesaplanması.
5. `isim` ve `yas`ın ekrana yazdırılması.

<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod


[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C++ Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⚙ C++ Kodu

```cpp
#include <iostream>
using namespace std;
int main()
{
    string isim; // “isim”in string olarak tanımlanması
    int yil, yas, buyil = 2019; // “yil”, “yas”, “buyil”ın tanımlanması
    // “isim” ve “yil”ın girilmesi
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << "Dogum yilinizi giriniz: ";
    cin >> yil;
    yas = buyil - yil; // “yas”ın değerinin hesaplanması
    cout << "Isminiz: " << isim <<  "Yasiniz: " << yas ; // “isim” ve “yas”ın ekrana yazdırılması 
    return 0;
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
"""
Pythonda değişken tanımlarken DataType(int,String,double...)'ını
belirtmenenize gerek yoktur.
"""
buyil = 2019 # Bu yılın tarihi icin "buyil" in tanımlanması
# “isim” ve “yil”ın girilmesi
isim = input("Isminizi giriniz: ")
yil = int(input("Dogum yilinizi giriniz: "))
yas = buyil - yil # “yas”ın değerinin hesaplanması
print("isminiz: ",isim,"Yasiniz: ",yas) # “isim” ve “yas”ın ekrana yazdırılması
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu 

```java
import java.util.*;
public class AdVeYasYazdirmak {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  String isim; // “isim”in string olarak tanımlanması
  int yil, yas, buyil = 2019; // “yil”, “yas”, “buyil”ın tanımlanması
  // “isim” ve “yil”ın girilmesi
  System.out.print("Isminizi giriniz: ");
  isim = input.nextLine();
  System.out.print("Dogum yilinizi giriniz: ");
  yil = input.nextInt();
  yas = buyil - yil; // “yas”ın değerinin hesaplanması
  System.out.println("Isminiz: " + isim); // “isim” ve “yas”ın ekrana yazdırılması
  System.out.println("Yasiniz: " + yas);
  input.close();
 }
}
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C# Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ⏹ C# Kodu

```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace AdVeYasYazdirmak
{
    class Program{
        static void Main(string[] args){
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

<!-- ----------------------------- Ekran Çıktısı ----------------------------------- -->

## 🎉 Ekran Çıktısı

```
Isminizi giriniz: Muhammed
Dogum yilinizi giriniz: 1996
Isminiz: Muhammed
Yasiniz: 21
```

<!-- ----------------------------- Notlar ----------------------------------- -->

## 💡 Notlar 
1. İsim metin olduğu için, `isim` string olarak tanımlandı.
