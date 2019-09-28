import java.util.*;
public class MatrisToplama {
 public static void main(String arg[]) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int m, n, i, j; 
  System.out.print("Matrislerin satir sayisini giriniz (m)=");
  
  // Boyutların girilmesi
  m = input.nextInt(); 
  System.out.print("Matrislerin sutun sayisini giriniz (n)=");
  n = input.nextInt(); 

  // Matrislerin oluşturulması
  int A[][] = new int[m][n]; 
  int B[][] = new int[m][n];
  int C[][] = new int[m][n];

  // “A” matrisinin girilmesi.
  System.out.println("A matrisini giriniz:");
  for (i = 0; i < m; i++)
   for (j = 0; j < n; j++) {
    System.out.printf("A[%d][%d]=", i + 1, j + 1);
    A[i][j] = input.nextInt();
   } 

  // “B” matrisinin girilmesi. 
  System.out.println("B matrisini giriniz:");
  for (i = 0; i < m; i++)
   for (j = 0; j < n; j++) {
    System.out.printf("B[%d][%d]=", i + 1, j + 1);
    B[i][j] = input.nextInt();
   } 

   // İç içe döngü kullanarak karşılıklı elemanların toplanması.
  for (i = 0; i < m; i++) 
   for (j = 0; j < n; j++) {
    C[i][j] = A[i][j] + B[i][j];
   }
  System.out.printf("A+B=\n");
  // “C” matrisinin yazdırılması.
  for (i = 0; i < m; i++) {
   for (j = 0; j < n; j++)
    System.out.printf("%d ", C[i][j]); 
   System.out.printf("\n");
  }
  input.close();
 }
}