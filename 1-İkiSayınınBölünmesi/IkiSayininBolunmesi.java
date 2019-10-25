import java.util.*;
public class IkiSayininBolunmesi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);
  // “a”, “b”, “c” tanımlanması
  int a, b, c; 

  // “a” ve “b”nin değerlerinin girilmesi
  System.out.print("a=");
  a = input.nextInt(); 
  System.out.print("b=");
  b = input.nextInt(); 
  
  // Büyük sayının a'ya alınması
  if (a < b) 
  {
   c = a; // “a”nın değerinin “c”de saklanması
   a = b; // “b”nin değeri “a”ya atanması
   b = c; // “c”de Saklanan değerinin “b”ye aktarılması
  }
  
  if (a % b == 0) // 0 ise “Tam Bolunebilir” yazdırılması
   System.out.println("Tam Bolunebilir");
  else // 0 değilse “Tam Bolunemez” yazdırılması
   System.out.println("Tam Bolunemez");
 }
}