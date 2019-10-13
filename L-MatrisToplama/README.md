# ➕ İki Matrisin Toplamı

## ❓ Soru
Boyutları ve elemanları klavyeden girilen iki matrisin toplamını hesaplayan programı yazınız.

## ⛓ Program Kısımları
1. İki matrisin boyutları ve elemanlarını girmek.
2. Toplama işlemini gerçekleştirmek.
3. Sonuç matrisini yazdırmak.
   
## 👓 Çözüm Yöntemi 
- 2 matrisi toplamak için matrislerin karşılıklı elemanları toplanır.
  
## 👩‍🔧 Çözüm Adımları
1. Değişkenlerin tanımlanması.
2. Boyutların girilmesi.
3. Matrislerin oluşturulması.
4. `A` matrisinin girilmesi.
5. `B` matrisinin girilmesi.
6. İç içe döngü kullanarak karşılıklı elemanların toplanması.
7. `C` matrisinin yazdırılması.

## 🤖 Kod
<details>
<summary>Tıkla</summary>

```java
    import java.util.*;
    public class MatrisToplama {
    public static void main(String arg[]) {
    Scanner input = new Scanner(System.in);
    int m, n, i, j; //1. adim
    System.out.print("Matrislerin satir sayisini giriniz (m)=");
    m = input.nextInt(); //2. adim
    System.out.print("Matrislerin sutun sayisini giriniz (n)=");
    n = input.nextInt(); //2. adim
    int A[][] = new int[m][n]; //3. adim
    int B[][] = new int[m][n];
    int C[][] = new int[m][n];
    System.out.println("A matrisini giriniz:");
    for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
        System.out.printf("A[%d][%d]=", i + 1, j + 1);
        A[i][j] = input.nextInt();
    } //4. adim
    System.out.println("B matrisini giriniz:");
    for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
        System.out.printf("B[%d][%d]=", i + 1, j + 1);
        B[i][j] = input.nextInt();
    } //5. adim
    for (i = 0; i < m; i++) //6. adim
    for (j = 0; j < n; j++) {
        C[i][j] = A[i][j] + B[i][j];
    }
    System.out.printf("A+B=\n");
    for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++)
        System.out.printf("%d ", C[i][j]); //7. adim
    System.out.printf("\n");
    }
    input.close();
    }
    }
```
</details>


## 🎉 Ekran Çıktısı

```
Matrislerin satir sayisini giriniz (m)=2
Matrislerin sutun sayisini giriniz (n)=2

A matrisini giriniz:
A[1][1]=1
A[1][2]=2
A[2][1]=3
A[2][2]=4

B matrisini giriniz:
B[1][1]=5
B[1][2]=6
B[2][1]=7
B[2][2]=8

A+B=
6 8
10 12
```

## 💡 Notlar 
- İki boyutlu matrislerin üzerinde yapılan işlemler iç içe döngü kullanarak yapılır.