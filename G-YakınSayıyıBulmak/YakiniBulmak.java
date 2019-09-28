import java.util.*;
public class YakiniBulmak {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int x, sayi, yakinlik, enyakin, i;
  int enyakin2 = 0, yakinlik2 = -1;

  // “sayi”nın girilmesi
  sayi = input.nextInt();

  // İlk “x” değerinin girilmesi
  x = input.nextInt();

  // İlk değere göre değişkenlere değer atanması
  enyakin = x; 
  yakinlik = Math.abs(x - sayi);
  for (i = 0; i < 9; i++) {
   // “x”in girilmesi   
   x = input.nextInt();

   // Koşullar kontrol edilirken “yakinlik” ve “enyakin” değerlerin değiştirilmesi
   if (Math.abs(x - sayi) < yakinlik) { 
    yakinlik = Math.abs(x - sayi);
    enyakin = x;
   } else if (Math.abs(x - sayi) == yakinlik) {
    if (x != enyakin) {
     yakinlik2 = yakinlik;
     enyakin2 = x;
    }
   }
  }
  if (yakinlik2 == yakinlik)
   System.out.println("Diger en yakin sayi= " + enyakin2); 
  System.out.println("En yakin sayi= " + enyakin);
  input.close();
 }
}