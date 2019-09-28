public class SansOyunu {
 public static void main(String arg[]) {
  boolean beyaz_top[] = new boolean[50];
  int beyaz, kirmizi, i, b;
  System.out.print("Beyaz Toplar: ");
  for (i = 0; i < 5; i++) {
   b = 0;
   while (b == 0) {
    beyaz = (int)(Math.random() * 48 + 1);
    if (beyaz_top[beyaz] == false) {
     System.out.print(beyaz + "\t");
     b = 1;
     beyaz_top[beyaz] = true;
    }
   }
  }
  kirmizi = (int)(Math.random() * 42 + 30);
  System.out.print("\nKirmizi Top: " + kirmizi);
 }
}