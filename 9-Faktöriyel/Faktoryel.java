import java.util.*;
public class Faktoryel {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // “i”, “f”, “n” tanımlanması
  int i, n, f = 1;
  System.out.print("n=");
  
  // “n”nin değerinin girilmesi
  n = input.nextInt();

  // n!’i hesaplayan döngünün oluşturulması
  // “i=1” olduğunda sonucu etkilemeyeceği için “i=2”den başlıyoruz
  for (i = 2; i <= n; i++)

   // “f” değerini i sayacının değerleriyle çarpacak işlem
   f = f * i; 

   // “f”nin değerinin yazdırılması
  System.out.println("n!=" + f);
  input.close();
 }
}