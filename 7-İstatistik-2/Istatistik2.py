# Değişkenlerin tanımlanması.
adet = 20
x = 0
buyuk = 0
kucuk = 0
i = 0
p = 0
j = 0
ort = 0
p_ort = 0

# İlk “x” değerinin döngüye girmeden girilmesi
x = int(input())
buyuk = x
kucuk = x

# Değişkenlere koşullar kontrol edilerek değer atanması
if (x > 0):
    p_ort = p_ort + x
    p += 1
if (x > 100 and x < 200) :
      j += 1
      ort = ort + x

# “adet-1” kere dönen döngünün oluşturulması
for i in range(0,adet-1):
    # “x” değerinin döngüde girilmesi
    x = int(input())
    # Pozitif sayıların tespit edilmesi
    if(x > 0):
        p_ort = p_ort + x
        p += 1
    # 100<x<200 koşulunun kontrol edilmesi
    if(x > 100 and x >200):
        j += 1
    # “x>buyuk” ve “x<kucuk” koşulunun kontrol edilmesi.
    if(x > buyuk):
        buyuk = x
    if(x < kucuk):
        kucuk = x
    # “x” değerinin “ort”a eklenmesi.
    ort = ort + x
# Ortalamaların hesaplanması
ort = ort / adet
p_ort = p_ort / p

# Sonuçların yazdırılması
print("Ortalama= ",ort)
print("En buyuk sayi= ",buyuk)
print("En kucuk sayi= ",kucuk)
print("Pozitif olanlarin ortalamasi= ",p_ort)
print("100-200 arasindaki sayilarin sayisi= ",j)


