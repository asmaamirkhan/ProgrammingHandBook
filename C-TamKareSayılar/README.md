# Tam Kare Sayılar

## ❓ Soru
Girilen bir tamsayının tam kare olup olmadığını bulan algoritmayı yazınız.

## ⛓ Program Kısımları
1. Sayı girmek.
2. Tam kare olup olmadığını tespit etmek.
3. Sonucu ekrana yazdırmak.

   
## 👓 Çözüm Yöntemi 
- Bir `x` sayısı tam kare olması için `(x=i*i)` koşulunu sağlayan bir `i` bulunması lazım.
- `i`yi bulmak için 0 ile `(x/2+1)` arasındaki sayıları kontrol ederiz.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. `x`in girilmesi.
3. `(x/2+1)` kere dönen döngünün oluşturulması.
a- Koşulun kontrol edilmesi.
4. Sonucun yazdırılması.

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
int main() {
  // Değişkenlerin tanımlanması
  int i, x, t = 0;
  // “x”in girilmesi
  cin >> x;
  // (X/2+1) kere dönen döngünün oluşturulması
  for (i = 0; i <= x / 2 + 1; i++) {
    // Koşulun kontrol edilmesi.
    if (x == i * i) 
    {
      t = 1;
      // Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
      break;
    }
  }
  // Koşulun sağlanıp sağlanmadığını kontrol etmek için “t”yi kullandık, çünkü koşul sağlandığında “t” değişecek
  // Sonucun yazdırılması
  if (t != 0)
    cout << "tam kare";
  else
    cout << "tam kare degil";
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
public class TamKare {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int i, x, t = 0; // 1. adım
  x = input.nextInt(); // 2. adım
  for (i = 0; i <= x / 2 + 1; i++) // 3. adım
  {
   if (x == i * i) // 3. adım (a)
   {
    t = 1;
    break; // I. nota bak
   }
  }
  if (t != 0) // II. nota bak
   System.out.println("tam kare"); // 4. adım
  else
   System.out.println("tam kare degil");
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

namespace TamKare
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, x, t = 0;
            x = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i <= x / 2 + 1; i++)
            {
                if (x == i * i)
                {
                    t = 1;
                    break;
                }
            }
            if (t == 1)
                Console.WriteLine("tam kare");
		else
			Console.WriteLine("tam kare degil");
            Console.ReadLine();
        }
    }
}
```
</details>

## 🎉 Ekran Çıktısı

```
81
tam kare
27
tam kare degil
```

## 💡 Notlar 
1. Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
2. Koşulun sağlanıp sağlanmadığını kontrol etmek için `t`yi kullandık, çünkü koşul sağlandığında `t` değişecek.