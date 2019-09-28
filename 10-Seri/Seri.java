public class Seri {
 public static void main(String arg[]) {
  
  // “n” ve “i”nin tanımlanması.
  int n = 10, i;

  // “toplam”ın float (reel) tanımlanması
  float toplam = 0;

  // 1’den 10’a kadar döngünün oluşturulması
  for (i = 1; i <= 10; i++) 
  {
   // “i”ye göre terim değerinin hesaplanıp önceki toplama eklenmesi
   toplam = toplam + (i + (n - i) / faktoriyel(i)); 
  }

  // Formül sonucunun ekrana yazdırılması
  System.out.println(toplam); 
 }

 public static float faktoriyel(int a) { 
  int f = 1, i;
  for (i = 2; i <= a; i++)
   f = f * i;
  return f;
 }
}