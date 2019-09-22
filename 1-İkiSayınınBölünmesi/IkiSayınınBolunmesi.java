import java.util.*;
public class IkiSayınınBolunmesi {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // “a”, “b”, “c” tanımlanması
  int a, b, c;
  System.out.print("a=");
  
  // “a” ve “b”nin değerlerinin girilmesi
  a = input.nextInt();
  System.out.print("b=");
  b = input.nextInt();

  // Büyük sayının tespit edilmesi.
  if (a < b)
  {
   // 3. Adım (i)   
   c = a;
   // 3. Adım (ii)  
   a = b;
   // 3. Adım (iii) 
   b = c; 
  }
  
  // 4. Adım (i)  
  if (a % b == 0) 
   System.out.println("Tam Bolunebilir");
  // 4. Adım (ii)
  else 
   System.out.println("Tam Bolunemez");
 }
}