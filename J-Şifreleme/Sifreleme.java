import java.util.*;
public class Sifreleme {
  public static void main(String arg[]) {
   Scanner input = new Scanner(System.in);

   // Değişkenlerin tanımlanması
   int i, harf_sayi = 0, rakam_sayi = 0;
   String metin;

   // Metnin girilmesi
   metin = input.nextLine();

   // Harfler dizisinin oluşturulması
   char harfler[] = new char[metin.length()];

   // Metnin string’den char dizisine çevrilmesi
   harfler = metin.toCharArray();

   // Metnin uzunluğu kadar dönen döngünün oluşturulması
   for (i = 0; i < metin.length(); i++) { 

    // Karakterlerin kontrol edilmesi.   
    if (harfler[i] >= 'a' && harfler[i] <= 'z') {
     harfler[i] = (char)(harfler[i] - 'a' + 'A');
     harf_sayi++;
    } else
    if (harfler[i] >= 'A' && harfler[i] <= 'Z')
     harf_sayi++;
    else if (harfler[i] >= '0' && harfler[i] <= '9') {
     harfler[i] = (char)('9' - harfler[i] + '0');
     rakam_sayi++;
    }
   }
   // Sonuçların yazdırılması
   System.out.println("Harf sayisi= " + harf_sayi); 
   System.out.println("Rakam sayisi= " + rakam_sayi);
   for(i = metin.length()-1; i>=0; i--)
			System.out.print(harfler[i]);
  }
 }