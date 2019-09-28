import java.util.*;
public class TabanCevirme {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  
  // Değişkenlerin tanımlanması
  int sayi, s = 0, i = 0, basamak;

  // Sayının girilmesi 
  sayi = input.nextInt();

  while (sayi > 0)
  {

   // Çevirme işleminin yapılması   
   basamak = (int)((sayi % 2) * Math.pow(10, i));
   i++;
   sayi = sayi / 2;
   s = s + basamak;
  }

  // Çevrilen sayının ekrana yazdırılması
  System.out.println(s); 
  input.close();
 }
}