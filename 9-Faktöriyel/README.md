# Bir Sayının Faktöriyelini Hesaplamak

## ❓ Soru
Verilen bir sayının faktöriyelini hesaplayan algoritmayı yazınız.

## ⛓ Program Kısımları
1. `n` sayısının değerini girmek.
2. Bir döngü kullanarak `n!` değerini hesaplamak.
3. `n!` değerini yazdırmak

## 👓 Çözüm Yöntemi 
- `n! = 1*2*3 …. (n-2)*(n-1)*n` veya `n! = n*(n-1)*(n-2) … 2*1` olduğu bellidir.
- `f` diye bir değişken tanımlayabiliriz, başlangıç değeri 1 olsun, ve onu 2,3 …. `n`ye kadar sayılarıyla çarpabiliriz, bunu yapmak için `i` sayacı tanımlanır 2’den `n`ye kadar değer alır (`i`nin her arttığında `x`le çarpılacak şekilde).
  
## 👩‍🔧 Çözüm Adımları
1. `i`, `f`, `n` tanımlanması.
2. `n`nin değerinin girilmesi.
3. `n!`i hesaplayan döngünün oluşturulması.
4. `f`nin değerinin yazdırılması.

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
    int i, n, f = 1; // “i”, “f”, “n” tanımlanması
    cout << "n=";
    cin >> n; // “n”nin değerinin girilmesi
    // n!’i hesaplayan döngünün oluşturulması
    // “i=1” olduğunda sonucu etkilemeyeceği için “i=2”den başlıyoruz
    for (i = 2; i <= n; i++)
        f = f * i; // “f” değerini i sayacının değerleriyle çarpacak işlem
    cout << "n!=" << f; // “f”nin değerinin yazdırılması
 }
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class Faktoryel {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int i, n, f = 1; // “i”, “f”, “n” tanımlanması
  System.out.print("n=");
  n = input.nextInt(); // “n”nin değerinin girilmesi
  // n!’i hesaplayan döngünün oluşturulması
  // “i=1” olduğunda sonucu etkilemeyeceği için “i=2”den başlıyoruz
  for (i = 2; i <= n; i++) 
   f = f * i; // “f” değerini i sayacının değerleriyle çarpacak işlem
  System.out.println("n!=" + f); // “f”nin değerinin yazdırılması
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
namespace Faktoryel{
    class Program{
        static void Main(string[] args){
            int i, x, f = 1;
            Console.WriteLine("n=");
            x = Convert.ToInt32(Console.ReadLine());
            for (i = 2; i <= x; i++)
                f = f * i;
            Console.WriteLine("n!=" + f);
            Console.ReadLine();
        }
    }
}
```


## 🎉 Ekran Çıktısı

```
n=5
n!=120
```

## 💡 Notlar 
1. `i=1` olduğunda sonucu etkilemeyeceği için `i=2`den başlıyoruz.
2. `f` değerini `i` sayacının değerleriyle çarpacak işlem.