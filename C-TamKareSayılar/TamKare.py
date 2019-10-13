# Değişkenlerin tanımlanması
i = 0
x = 0
t = 0

# “x”in girilmesi
x = int(input())

# (X//2+2) kere dönen döngünün oluşturulması
for i in range(0,x//2 +2):
    # Koşulun kontrol edilmesi.
    if (x == i * i):
        t = 1
        # Fazladan işlem yaptırmamak için karekökü bulunduğunda döngüden çıkarız.
        break

# Koşulun sağlanıp sağlanmadığını kontrol etmek için “t”yi kullandık, çünkü koşul sağlandığında “t” değişecek
# Sonucun yazdırılması
if (t != 0):
    print("tam kare")
else:
    print("tam kare degil")