import java.util.*;
public class HaneSayisi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  // Değişkenlerin tanımlanması
  int ondalik_h = 0, tam_h = 0, t_sayi;
  float sayi, sayi1;

  // “sayi”nın girilmesi
  sayi = input.nextFloat();
  sayi1 = sayi;

  // “t_sayi”ya sayının tam değerinin atanması
  t_sayi = (int) sayi;

  while (t_sayi != 0) {
   // “t_sayi” 10’a bölüp “tam_h”nın artırılması   
   t_sayi = t_sayi / 10;
   tam_h++;
  }

  while (sayi % 10 != 0)
  {
   // “sayi” 10’la çarpıp “ondalik_h”nın artırılması   
   sayi = sayi * 10; 
   ondalik_h++; 
  }

  // Sonuçların ekrana yazdırılması
  System.out.println("Tam kisminin hane sayisi= " + tam_h); 
  if (sayi1 % 10 != 0)
    // `sayı%10=0` olması için birlerin 0 olması lazım ama hane 
    // sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h - 1));
  else
   System.out.println("Ondalik kisminin hane sayisi= " + (ondalik_h));
  input.close();
 }
}