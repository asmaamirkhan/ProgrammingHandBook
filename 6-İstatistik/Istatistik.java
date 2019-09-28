public class Istatistik {
 public static void main(String arg[]) {
  
  // Değişkenlerin tanımlanması.
  int i, t_adet = 0, c_adet = 0;

  // Not: Bölme işleminden reel sayı çıkabileceği için 
  // ortalama değişkenlerini float tanımladık 
  float t_toplam = 0, t_ort, c_toplam = 0, c_ort;

  // 2’den 100’a kadar döngünün oluşturulması 
  for (i = 2; i < 100; i++) 
  {
   // Koşulun kontrol edilmesi   
   if (i % 2 == 1)
   {
    // Sayılar adedinin artırılması
    t_adet++;

    // Sayılar toplamına “i” değerinin eklenmesi
    t_toplam = t_toplam + i;
   } else {
    // Sayılar adedinin artırılması
    c_adet++;

    // Sayılar toplamına “i” değerinin eklenmesi
    c_toplam = c_toplam + i;
   }
  } 
  // Ortalamaların hesaplanması
  // "int/int=int" olduğu için "t_toplam, c_toplam" değişkenleri float tanımladık.
  t_ort = t_toplam / t_adet; 
  c_ort = c_toplam / c_adet; 

  // Sonuçların yazdırılması
  System.out.println("Teklerin toplami= " + t_toplam);
  System.out.println("Teklerin ortalamasi= " + t_ort);
  System.out.println("Ciftlerin toplami= " + c_toplam);
  System.out.println("Ciftlerin ortalamasi= " + c_ort);
 }
}