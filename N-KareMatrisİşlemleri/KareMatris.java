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
   switch (secenek) { 
    // Girilen seçeneğe göre istenen fonksiyonun çağrılması
    case 1:
     {
      n1 = gir_mat(P);
     }
    case 2:
     {
      print_mat(P, n1);
      break;
     }
    case 3:
     {
      satir_degistir(P, n1);
      break;
     }
    case 4:
     {
      kosegen_degistir(P, n1);
      break;
     }
    case 5:
     {
      System.out.printf("Ortalama= %f\n", ortalama(P, n1));
      break;
     }
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