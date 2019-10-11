# Kesir Sadeleştirme

## ❓ Soru
Girilen bir kesri sadeleştiren programı yazınız.

## ⛓ Program Kısımları
1. Pay ve payda değerlerini girmek.
2. Sadeleştirme işlemini gerçekleştirmek.
3. Kesrin sadeleştirilmiş halini yazdırmak.

## 👓 Çözüm Yöntemi 
- Başlangıç değeri 2 olan `i` adlı bir sayaç oluşturulur, pay ve paydanın sayaca bölünemediği durumlarda sayaç artırılır. Pay ve paydanın sayaca bölünebildiği durumlarda pay ve payda sayaca bölünüp sayaç yine 2’ye eşitlenir.
- `i`, pay veya paydanın en küçüğünden büyük olmadığı surece bu işlem devam ettirilir.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Pay ve paydanın girilmesi.
3. Pay ve paydanın küçüğünün tespit edilmesi.
4. `i` `kucuk`ten büyük olmadığı sürece:
   - Pay ve payda `i`ye bölünebilirse:
     - İkisi ve `kucuk` `i`ye bölünür.
     - `i` 2’ye eşitlenir.
   - Pay ve payda `i`ye bölünemezse:
     - `i` artırılır.
5. Kesrin son halinin yazdırılması.

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
  int pay, payda, i = 2, kucuk; // Değişkenlerin tanımlanması
  // Pay ve paydanın girilmesi
  cout << "Payi gir:";
  cin >> pay; 
  cout << "Paydayi gir:";
  cin >> payda;

  // Pay ve paydanın küçüğünün tespit edilmesi
  if (pay > payda) 
   kucuk = abs(payda);
  else kucuk = abs(pay);
  while (i <= kucuk) {
   if (pay % i == 0 && payda % i == 0) {
    // pay, payda ve “kucuk” “i”ye bölünmesi
    pay /= i; 
    payda /= i;
    kucuk /= i;
    i = 2; 
   } else i++; 
  }
  cout << pay << " / " << payda; // Kesrin son halinin yazdırılması
 }
```

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.Scanner;
public class KesirSadelestirme {
 public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
  int pay, payda, i = 2, kucuk; // Değişkenlerin tanımlanması
  // Pay ve paydanın girilmesi
  System.out.print("Payi gir:");
  pay = input.nextInt(); 
  System.out.print("Paydayi gir:");
  payda = input.nextInt(); 
  // Pay ve paydanın küçüğünün tespit edilmesi
  if (pay > payda) 
   kucuk = Math.abs(payda);
  else kucuk = Math.abs(pay);
  while (i <= kucuk) //4. adim
  {
   if (pay % i == 0 && payda % i == 0) //4. adim (a)
   {
     // pay, payda ve “kucuk” “i”ye bölünmesi
      pay /= i; 
      payda /= i;
      kucuk /= i;
      i = 2; 
   } else i++;
  }
  System.out.printf("%d / %d", pay, payda); // Kesrin son halinin yazdırılması
  input.close();
 }
}
```


## 🎉 Ekran Çıktısı

```
Payi gir:172
Paydayi gir:36
43 / 9
```

## 💡 Notlar 
1. II. Yol: Pay ve paydanın OBEB’i bulunur, ikisi ona bölünerek sadeleştirilmiş haline getirebiliriz.