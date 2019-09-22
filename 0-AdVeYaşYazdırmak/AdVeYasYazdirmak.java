import java.util.*;
public class AdVeYasYazdirmak {
 public static void main(String arg[]) {

  Scanner input = new Scanner(System.in);

  // “isim”in string olarak tanımlanması
  String isim;
  
  // “yil”, “yas”, “buyil”ın tanımlanması
  int yil, yas, buyil = 2017; 
  System.out.print("Isminizi giriniz: ");
  
  // “isim” ve “yil”ın girilmesi
  isim = input.nextLine(); 
  System.out.print("Dogum yilinizi giriniz: ");
  yil = input.nextInt();

  // “yas”ın değerinin hesaplanması
  yas = buyil - yil;

  // “isim” ve “yas”ın ekrana yazdırılması
  System.out.println("Isminiz: " + isim); 
  System.out.println("Yasiniz: " + yas);
  
  input.close();
 }
}