import java.util.*;
public class RakamSayisi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // “x” ve “i”nin tanımlanması
  int x, i;
  System.out.println("3 haneli sayi giriniz:");
  
  // “x”in girilmesi
  x = input.nextInt();

  // 3 kere dönen döngünün oluşturulması
  for (i = 0; i < 3; i++) 
  {

   // Kalanın yazdırılması   
   System.out.println(x % 10);

   // “x”in onlar basamağının birler basamağına dönüştürülmesi 
   x = x / 10;
  }
  input.close();
 }
}