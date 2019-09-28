import java.util.*;
public class TamKare {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int i, x, t = 0;

  // “x”in girilmesi
  x = input.nextInt(); 

  // (X/2+1) kere dönen döngünün oluşturulması
  for (i = 0; i <= x / 2 + 1; i++)
  {
   // Koşulun kontrol edilmesi.
   if (x == i * i) // 3. adım (a)
   {
    t = 1;
    // Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
    break;
   }
  }

  // Koşulun sağlanıp sağlanmadığını kontrol etmek için “t”yi kullandık, çünkü koşul sağlandığında “t” değişecek
  // Sonucun yazdırılması
  if (t != 0)
   System.out.println("tam kare"); 
  else
   System.out.println("tam kare degil");
  input.close();
 }
}