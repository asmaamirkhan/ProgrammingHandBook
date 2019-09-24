import java.util.*;
public class BuyukSayiyiBulmak {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // “sayi”, “buyuk”, “i”nin tanımlanması
  int sayi, i, buyuk; 
  System.out.println("10 Sayi giriniz:");
  
  // İlk sayının döngüye girmeden kullanıcıdan girilmesi
  sayi = input.nextInt();

  // Girilen sayının “buyuk”e atanması
  buyuk = sayi;

  // “10-1” kere dönen döngünün oluşturulması
  for (i = 0; i < 9; i++) 
  {
    // Sayıların girilmesi
   sayi = input.nextInt(); 

   // Sayının “buyuk”le karşılaştırılması
   if (sayi > buyuk)
    buyuk = sayi;
  }

  //  “buyuk”ün ekrana yazdırılması. 
  System.out.println("En Buyuk sayi= " + buyuk);
  input.close();
 }
}