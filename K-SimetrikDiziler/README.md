# 🍏🍎 Simetrik Diziler

## ❓ Soru
Boyutu ve elemanları klavyeden girilen bir dizinin simetrik olup olmadığını kontrol eden programı yazınız.

## ⛓ Program Kısımları
1. Diziyi girmek.
2. Dizinin simetrik olup olmadığını kontrol etmek.
3. Sonucu yazdırmak.
   
## 👓 Çözüm Yöntemi 
- Bir dizinin simetrik olması için merkezine göre simetrik elemanlar eşit olmalıdır. 
  - Örneğin: `A= {1,5,8,5,1}, B= {1,5,5,1}` dizileri simetriklerdir.
- Başlangıç değeri `b=1` olan bir değişken tanımlanır dizinin herhangi iki simetrik elemanı eşit değilse değişkenin değeri değişecek.
- En sonda, değişkenin değeri `1` ise dizi simetriktir, değilse dizi simetrik değildir.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Boyutun girilmesi.
3. Dizinin tanımlanması.
4. `boyut` kere dönen döngü kullanarak elemanların girilmesi.
5. Dizinin başından merkezine kadar tarayan döngünün oluşturulması:
   - Simetrik elemanlar eşit değilse:
     - `b=0`
     - döngü kırılır.
6. `b`ye göre sonucun yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>


```java
import java.util.*;
class SimetrikDiziler {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int i, boyut, b = 1; //1. adim
  System.out.printf("Boyut=");
  boyut = input.nextInt(); //2. adim
  int A[] = new int[boyut]; //3. adim
  for (i = 0; i < boyut; i++) //4. adim
  {
   System.out.printf("A[%d]=", i + 1);
   A[i] = input.nextInt();
  }
  for (i = 0; i < boyut / 2; i++) //5. adim
   if (A[i] != A[boyut - 1 - i]) //5. adim (a)
  {
   b = 0; //5. Adim (a)(*)
   break; //5. Adim (a)(**)
  }
  if (b == 1) //6. adim
   System.out.println("A dizisi simetriktir");
  else
   System.out.println("A dizisi simetrik degildir");
  input.close();
 }
}
```
</details>


## 🎉 Ekran Çıktısı

```
Boyut=5
A[1]=1
A[2]=4
A[3]=5
A[4]=4
A[5]=1
A dizisi simetriktir

Boyut=4
A[1]=1
A[2]=2
A[3]=3
A[4]=4
A dizisi simetrik degildir
```
