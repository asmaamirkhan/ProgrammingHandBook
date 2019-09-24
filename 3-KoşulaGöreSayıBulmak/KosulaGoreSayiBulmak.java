public class KosulaGoreSayiBulmak {
 public static void main(String arg[]) {
 
  // “i” ve “adet”in tanımlanması. 
  int i, adet = 0; 

  // 2’den 99’a kadar döngünün oluşturulması.
  for (i = 2; i < 100; i++) 

    // Koşulun kontrol edilmesi.
    if ((i * 2 + 1) % 5 == 0) 
      adet++;

  //“adet”in ekrana yazdırılması.
  System.out.println("Adet= " + adet); 
 
 }
}