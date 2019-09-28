import java.util.*;
class SimetrikDiziler {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int i, boyut, b = 1; 
  System.out.printf("Boyut=");
  
  // Boyutun girilmesi
  boyut = input.nextInt();

  // Dizinin tanımlanması
  int A[] = new int[boyut];

  // “boyut” kere dönen döngü kullanarak elemanların girilmesi
  for (i = 0; i < boyut; i++) 
  {
   System.out.printf("A[%d]=", i + 1);
   A[i] = input.nextInt();
  }
  // Dizinin başından merkezine kadar tarayan döngünün oluşturulması
  for (i = 0; i < boyut / 2; i++) 

   // Simetrik elemanlar eşitlik kontrolu 
   if (A[i] != A[boyut - 1 - i]) 
  {
   b = 0;
   break;
  }

  // “b”ye göre sonucun yazdırılması
  if (b == 1) 
   System.out.println("A dizisi simetriktir");
  else
   System.out.println("A dizisi simetrik degildir");
  input.close();
 }
}