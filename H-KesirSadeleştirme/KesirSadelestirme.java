import java.util.Scanner;
public class KesirSadelestirme {
 public static void main(String[] args) {
  Scanner input = new Scanner(System.in);

  // Değişkenlerin tanımlanması
  int pay, payda, i = 2, kucuk;
  System.out.print("Payi gir:");

  // Pay ve paydanın girilmesi
  pay = input.nextInt(); 
  System.out.print("Paydayi gir:");
  payda = input.nextInt();

  // Pay ve paydanın küçüğünün tespit edilmesi
  if (pay > payda) 
   kucuk = Math.abs(payda);
  else kucuk = Math.abs(pay);
  while (i <= kucuk) 
  {
      
   if (pay % i == 0 && payda % i == 0) 
   {
    // pay, payda ve “kucuk” “i”ye bölünmesi
    pay /= i; 
    payda /= i;
    kucuk /= i;
    i = 2; 
   } else i++; 
  }

  // Kesrin son halinin yazdırılması
  System.out.printf("%d / %d", pay, payda);
  input.close();
 }
}