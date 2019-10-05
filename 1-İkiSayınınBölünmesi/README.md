# İki Sayının Tam Bölünüp Bölünmemesini Tespit Etmek

## ❓ Soru
Verilen iki sayının birbirine tam olarak bölünüp bölünemeyeceğini bulan algoritmayı yazınız. (Büyük sayı küçük sayıya bölünecek, sayıların girişteki sıraları farklı olabilir.)

## ⛓ Program Kısımları
1. `a` ve `b` değerlerini girmek.
2. `a` ile `b`yi karşılaştırmak (Gerekirse değiştirmek).
3. Birbirine bölünüp bölünmediğini öğrenmek.
4. 3.adıma göre sonuç yazdırmak.

## 👓 Çözüm Yöntemi 
- a mod b = 0 ise, `a` ve `b` tam bölündüğü bellidir.
  
## 👩‍🔧 Çözüm Adımları
1. `a`, `b`, `c` tanımlanması.
2. `a` ve `b`nin değerlerinin girilmesi.
3. Büyük sayının tespit edilmesi.

   i. `a`nın değerinin `c`de saklanması.

   ii. `b`nin değeri `a`ya atanması.

   iii. `c`de Saklanan değerinin `b`ye aktarılması.

4. Modun kontrol edilmesi:
   
   i. 0 ise `Tam Bolunebilir` yazdırılması.
   
   ii. 0 değilse `Tam Bolunemez` yazdırılması.

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
    // “a”, “b”, “c” tanımlanması
    int a, b, c;
    cout<< "a= ";
    // “a” ve “b”nin değerlerinin girilmesi
    cin >> a;
    cout << "b= ";
    cin >> b;
    // Büyük sayının tespit edilmesi.
    if (a < b)
    {
        // “a”nın değerinin “c”de saklanması  
        c = a;
        // “b”nin değeri “a”ya atanması
        a = b;
        // “c”de Saklanan değerinin “b”ye aktarılması
        b = c; 
    }
    // 0 ise “Tam Bolunebilir” yazdırılması
    if (a % b == 0) 
        cout<<"Tam Bolunebilir";
    // 0 değilse “Tam Bolunemez” yazdırılması
    else 
        cout<<"Tam Bolunemez";
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
public class onikinci_Program {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int a, b, c; // 1. adım
  System.out.print("a=");
  a = input.nextInt(); // 2. adım
  System.out.print("b=");
  b = input.nextInt(); // 2. Adım
  if (a < b) // 3. adım
  {
   c = a; // 3. Adım (i) , I. nota bak
   a = b; // 3. Adım (ii)
   b = c; // 3. Adım (iii)
  }
  if (a % b == 0) // 4. Adım (i)
   System.out.println("Tam Bolunebilir");
  else // 4. Adım (ii)
   System.out.println("Tam Bolunemez");
 }
}
```
</details>

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- C# Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------
<details>
<summary><b>C# Kodu</b></summary>

```java
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IkiSayininBolunmesi
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
            Console.Write("a=");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("b=");
            b = Convert.ToInt32(Console.ReadLine());
            if (a < b)
            {
                c = a;
                a = b;
                b = c;
            }
            if (a % b == 0)
                Console.WriteLine("bolunebilir");
		        else Console.WriteLine("bolunmez");
                Console.ReadLine();
        }
    }
}

```
</details>


## 🎉 Ekran Çıktısı

```
a=5    b=3    Tam Bolunemez
a=2    b=6    Tam Bolunebilir
```

## 💡 Notlar 
1. `a`nın değerinin kaybolmaması için geçici değişkende `c` değiştirme işleminin sırasında saklandı.
