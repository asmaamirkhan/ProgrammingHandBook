# Değişkenlerin tanımlanması.
i = 0
t_adet = 0
c_adet = 0

"""
Not: Bölme işleminden reel sayı çıkabileceği için 
ortalama değişkenlerini float olacaktır.
"""
t_toplam = 0
t_ort = 0
c_toplam = 0
c_ort = 0

# 2’den 100’a kadar döngünün oluşturulması
for i in range(2,101):
    #  Koşulun kontrol edilmesi
    if(i % 2 == 1):
        # Sayılar adedinin artırılması
        t_adet +=1

        # Sayılar toplamına “i” değerinin eklenmesi
        t_toplam = t_toplam + i
    else:
        #  Sayılar adedinin artırılması
        c_adet += 1

        # Sayılar toplamına “i” değerinin eklenmesi
        c_toplam = c_toplam + i

"""
Ortalamaların hesaplanması
"int/int=int" olduğu için "t_toplam, c_toplam" değişkenleri float olabilir.
"""
t_ort = t_toplam / t_adet
c_ort = c_toplam / c_adet

# Sonuçların yazdırılması
print("Teklerin toplami= ",t_toplam)
print("Teklerin ortalamasi= ",t_ort)
print("Ciftlerin toplami= ",c_toplam)
print("Ciftlerin ortalamasi= ",c_ort)