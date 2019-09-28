import java.util.*;
public class MatrisCarpma {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması.
  int m, n, f, p, i, j, k;
  System.out.println("A(m,n) Boyutlarini giriniz:");

  // İki matrisin boyutlarının girilmesi
  m = input.nextInt(); 
  n = input.nextInt(); 
  System.out.println("B(f,p) Boyutlarini giriniz:");
  f = input.nextInt(); 
  p = input.nextInt(); 
  int A[][] = new int[m][n];
  int B[][] = new int[f][p];
  int C[][] = new int[m][p];

  // Çarpım koşulunun kontrol edilmesi
  if (n != f) 
   System.out.println("Matrisler carpilamaz");
  else { 
   // A matrisinin elemenlarının girilmesi   
   for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
     System.out.printf("A[%d][%d]=", i + 1, j + 1);
     A[i][j] = input.nextInt();
    } 
   System.out.printf("\n");

   // B matrisinin elemenlarının girilmesi
   for (i = 0; i < f; i++)
    for (j = 0; j < p; j++) {
     System.out.printf("B[%d][%d]=", i + 1, j + 1);
     B[i][j] = input.nextInt();
    } 

   // Çarpımın hesaplanması 
   for (i = 0; i < m; i++) 
    for (j = 0; j < p; j++)
     for (k = 0; k < n; k++)
      C[i][j] += A[i][k] * B[k][j];
   System.out.printf("\nA*B=\n");

   // C matrisinin yazdırılması
   for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++)
     System.out.printf("%d\t", C[i][j]); 
    System.out.printf("\n");
   }
  }
  input.close();
 }
}