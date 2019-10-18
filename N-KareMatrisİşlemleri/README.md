# 🔥 Kare Matrislerin Üzerinde İşlemler

<!-- ----------------------------- Soru ----------------------------------- -->

## ❓ Soru
Aşağıdaki fonksiyonları yazıp main içerisinde seçenek listesi olarak çağırınız.
1. Bir kare matrisi okutan fonksiyon.
2. Bir kare matrisi yazdıran fonksiyon.
3. Bir kare matrisin 2 satırını yer değiştiren fonksiyon.
4. Bir kare matrisin köşegenlerini yer değiştiren fonksiyon.
5. Bir kare matrisin elemanlarının aritmetik ortalamasını hesaplayan fonksiyon.

> Not: Program 6 girilene kadar sürekli çalışacaktır.

<!-- ----------------------------- Program Kısımları ----------------------------------- -->

## ⛓ Program Kısımları
1. main’de kullanılacak değişkenleri ve matrisi tanımlamak.
2. Fonksiyonları main içerisinde switch kullanarak çağırmak.
3. Fonksiyonları yazmak.

<!-- ----------------------------- Çözüm Yöntemi ----------------------------------- -->

## 👓 Çözüm Yöntemi 

<img src="../res/MatrisOrnegi.png" height="75"  />

- Herhangi bir satırın eleman indeksinde `i` sabitken `j` değişir.
- Asal köşegenin her a<sub>ij</sub> elemanı, `(i=j)` özelliğine sahiptir.
  - Kod örneği: `for(i=0; i<n; i++) { A[i][i] …}`
- Ters köşegenin her aij elemanı, `(j=n-1-i)` özelliğine sahiptir.
  - Kod örneği: `for(i=0; i<n; i++) { A[i][n-1-i] …}`

<!-- ----------------------------- Çözüm Adımları ----------------------------------- -->
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenler ve matrisin tanımlanması.
2. `secenek` 6’ya eşit olmadığı sürece:
   - Seçenek listesi yazdırılır.
   - `secenek` değeri girilir.
   - `secenek`e göre switch kullanarak fonksiyon çağırılacak.
     - `secenek = 1`: Matris okutma fonk. çağrılır.
     - `secenek = 2`: Matris yazdırma fonk. çağrılır.
     - `secenek = 3`: Satır yer değiştirme fonk. çağrılır.
     - `secenek = 4`: Köşegen yer değiştirme fonk. çağrılır.
     - `secenek = 5`: Ortalama hesaplama fonk. çağrılır.
     - `secenek = 6`: switch’ten çıkılır.
     - `secenek = Diğer`: Hata mesajı verilir.

### 1. Matris okutma fonksiyonu
1. Değişkenlerin tanımlanması.
2. Boyutun girilmesi.
3. İç içe döngüyle elemanların girilmesi.
4. Boyutun geri döndürülmesi.


### 2. Matris yazdırma fonksiyonu

1. Sayaçların tanımlanması.
2. İç içe döngüyle elemanların yazdırılması.

### 3. İki satır yer değiştirme fonksiyonu

1. Değişkenlerin tanımlanması.
2. İstenen satırların girilmesi.
3. Bir döngüyle istenen satırların elemanlarının geçici değişken kullanarak değiştirilmesi.


### 4. Köşegen yer değiştirme fonksiyonu

1. Değişkenlerin tanımlanması.
2. Bir döngüyle köşegenlerin elemanlarının geçici değişken kullanarak değiştirilmesi.


### 5. Ortalama hesaplama fonksiyonu

1. Değişkenlerin tanımlanması.
2. İç içe döngüyle elemanların toplanması.
3. Toplamın “n2”ye bölünmesi.
4. Ortalamanın geri döndürülmesi.


<!-- ----------------------------- Kodlar ----------------------------------- -->

## 🤖 Kod

[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Python Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### 🐍 Python Kodu

```py
def gir_mat():
  # Boyutun girilmesi
  print("Matrisin boyutunu giriniz: ")
  n = int(input()) 
  A = [[0 for i in range(n)] for i in range(n)]
  # İç içe döngüyle elemanların girilmesi
  print("A matrisini giriniz:")
  for i in range(n):
    for j in range(n):
      print('A[{}][{}]'.format(i+1, j+1))
      A[i][j] = int(input())
  return A; 

def print_mat(A):
  # İç içe döngüyle elemanların yazdırılması
  print("A Matrisi:")
  for i in range(len(A)):
    for j in range(len(A[0])):
      print(A[i][j], '  ', end="")
    print()
 
def satir_degistir(A): 
  # İstenen satırların girilmesi
  print("Degistirmek istediginiz satirlari girininz:\n");
  satir1 = int(input()) 
  satir2 = int(input())
  # Bir döngüyle istenen satırların elemanlarının geçici değişken kullanarak değiştirilmesi
  for i in range(len(A)):
    temp = A[satir1 - 1][i] 
    A[satir1 - 1][i] = A[satir2 - 1][i]
    A[satir2 - 1][i] = temp
  
  print("{}. satir & {}. satir degistirildi.".format(satir1, satir2))

# Bir döngüyle köşegenlerin elemanlarının geçici değişken kullanarak değiştirilmesi 
def kosegen_degistir(A):
  for i in range(len(A)):
    temp = A[i][i] 
    A[i][i] = A[i][len(A) - 1 - i]
    A[i][len(A) - 1 - i] = temp
  print("Kosegenler degistirildi.")

def ortalama(A): 
  toplam = 0 
  # İç içe döngüyle elemanların toplanması
  for i in range(len(A)):
    for j in range(len(A)):
      toplam += A[i][j]
  # Toplamın “n üzeri 2”ye bölünmesi
  ort = toplam / (len(A)*len(A))
  return ort

while True:
  # Seçenek listesinin yazdırılması
  print("""==============================
1- Yeni Matris girmek\n2- Matrisi yazdirmak
3- 2 satiri degistirmek\n4- Kosegenleri degistirmek
5- Elemanlar ortalamasini hesaplamak\n6- Exit
  Yukaridakilerden bir tane seciniz:""")
  secenek = int(input()) # Seçeneğin girilmesi
  # Girilen seçeneğe göre istenen fonksiyonun çağrılması
  if secenek == 1:
    A = gir_mat()
  elif secenek == 2:
    print_mat(A)
  elif secenek == 3:
    satir_degistir(A)
  elif secenek == 4:
    kosegen_degistir(A)
  elif secenek == 5:
    print('Ortalama= ', ortalama(A))
  elif secenek == 6:
    break
  else:
    print("Hata!, Girilecek sayi 1,6 arasinda olmalidir!")
```


[//]: ------------------------------------------------------------------------------
<!-- ----------------------------- Java Kodu ----------------------------------- -->
[//]: ------------------------------------------------------------------------------

### ☕ Java Kodu

```java
import java.util.*;
public class KareMatris {
 static final int max = 10;
 static Scanner input = new Scanner(System.in);
 public static void main(String arg[]) {
  int n1 = 0, secenek; 
  int P[][] = new int[max][max];
  do {
   // Seçenek listesinin yazdırılması
   System.out.printf("========================= ===== \n1- Yeni Matris girmek\n2- Matrisi yazdirmak\n3- 2 satiri degistirmek\n4- Kosegenleri degistirmek\n5- Elemanlar ortalamasini hesaplamak\n6- Exit\nYukaridakilerden bir tane seciniz:");
   // Seçeneğin girilmesi
   secenek = input.nextInt(); 
   // Girilen seçeneğe göre istenen fonksiyonun çağrılması
   switch (secenek) { 
    case 1:
      n1 = gir_mat(P);
      break;
    case 2:
      print_mat(P, n1);
      break;
    case 3:
      satir_degistir(P, n1);
      break;
    case 4:
      kosegen_degistir(P, n1);
      break;
    case 5:
      System.out.printf("Ortalama= %f\n", ortalama(P, n1));
      break;
    case 6:
     break;
    default:
     System.out.printf("Hata!, Girilecek sayi 1,6 arasinda olmalidir!\n");
   }
  } while (secenek != 6);
 }
 
 static int gir_mat(int a[][]) { 
  // Değişkenlerin tanımlanması
  int i, j, n; 
  // Boyutun girilmesi
  System.out.printf("Matrisin boyutunu giriniz: ");
  n = input.nextInt();
  // İç içe döngüyle elemanların girilmesi 
  for (i = 0; i < n; i++) 
   for (j = 0; j < n; j++) {
    System.out.printf("P[%d][%d]=", i + 1, j + 1);
    a[i][j] = input.nextInt();
   }
  // Boyutun geri döndürülmesi
  return n;
 }
 static void print_mat(int a[][], int n) { 
  // Sayaçların tanımlanması
  int i, j; 
  // İç içe döngüyle elemanların yazdırılması
  System.out.printf("P Matrisi:\n");
  for (i = 0; i < n; i++) {
   for (j = 0; j < n; j++)
    System.out.printf("%d\t", a[i][j]); 
   System.out.printf("\n");
  }
 }
 static void satir_degistir(int a[][], int n) { 
  // Değişkenlerin tanımlanması
  int i, satir1, satir2, temp;
  // İstenen satırların girilmesi
  System.out.printf("Degistirmek istediginiz satirlari girininz:\n");
  satir1 = input.nextInt(); 
  satir2 = input.nextInt();
  // Bir döngüyle istenen satırların elemanlarının geçici değişken kullanarak değiştirilmesi
  for (i = 0; i < n; i++) {
   temp = a[satir1 - 1][i]; 
   a[satir1 - 1][i] = a[satir2 - 1][i];
   a[satir2 - 1][i] = temp;
  }
  System.out.printf("%d. satir & %d. satir degistirildi.\n", satir1, satir2);
 }
 static void kosegen_degistir(int a[][], int n) {
  // Değişkenlerin tanımlanması
  int i, temp; 
  // Bir döngüyle köşegenlerin elemanlarının geçici değişken kullanarak değiştirilmesi
  for (i = 0; i < n; i++) {
   temp = a[i][i]; 
   a[i][i] = a[i][n - 1 - i];
   a[i][n - 1 - i] = temp;
  }
  System.out.printf("Kosegenler degistirildi.\n");
 }
 static float ortalama(int a[][], int n) { 
  // Değişkenlerin tanımlanması
  int toplam = 0, i, j; 
  float ort;
  // İç içe döngüyle elemanların toplanması
  for (i = 0; i < n; i++) 
   for (j = 0; j < n; j++)
    toplam += a[i][j];
  // Toplamın “n üzeri 2”ye bölünmesi  
  ort = (float) toplam / (n * n);
  // Ortalamanın geri döndürülmesi
  return ort; 
 }
}   
```

<!-- ----------------------------- Notlar ----------------------------------- -->


## 💡 Notlar 
1. Programın switch case’lerini sırayla yapmaması için her case’in sonunda switch kırılır.