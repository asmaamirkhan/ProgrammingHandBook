import java.util.*;
public class Istatistik2 {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  int adet = 20, x, buyuk, kucuk, i, p = 0, j = 0;

  // Değişkenlerin tanımlanması.
  float ort = 0, p_ort = 0;

  // İlk “x” değerinin döngüye girmeden girilmesi
  x = input.nextInt();
  buyuk = x;
  kucuk = x;

  // Değişkenlere koşullar kontrol edilerek değer atanması
  if (x > 0) { 
   p_ort = p_ort + x;
   p++;
  }
  if (x > 100 && x < 200) 
   j++;
  ort = ort + x;

  // “adet-1” kere dönen döngünün oluşturulması
  for (i = 0; i < adet - 1; i++) {

   // “x” değerinin döngüde girilmesi
   x = input.nextInt(); 
   // Pozitif sayıların tespit edilmesi
   if (x > 0) { 
    p_ort = p_ort + x;
    p++;
   }

   // 100<x<200 koşulunun kontrol edilmesi
   if (x > 100 && x < 200) 
    j++;

   // “x>buyuk” ve “x<kucuk” koşulunun kontrol edilmesi. 
   if (x > buyuk)
    buyuk = x;
   if (x < kucuk)
    kucuk = x;
   // “x” değerinin “ort”a eklenmesi.
   ort = ort + x;
  } 

  // Ortalamaların hesaplanması
  ort = ort / adet; 
  p_ort = p_ort / p; 

  // Sonuçların yazdırılması
  System.out.println("Ortalama= " + ort);
  System.out.println("En buyuk sayi= " + buyuk);
  System.out.println("En kucuk sayi= " + kucuk);
  System.out.println("Pozitif olanlarin ortalamasi= " + p_ort);
  System.out.println("100-200 arasindaki sayilarin sayisi= " + j);
  input.close();
 }
}