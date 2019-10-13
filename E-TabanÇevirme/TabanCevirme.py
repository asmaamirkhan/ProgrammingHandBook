from math import pow
# Değişkenlerin tanımlanması
s = 0
i = 0
basamak = 0

# Sayının girilmesi
sayi = int(input())

while (sayi > 0):
    #  Çevirme işleminin yapılması
    basamak = int((sayi % 2) * pow(10, i))
    i += 1
    sayi = sayi // 2
    s = s + basamak

# Çevrilen sayının ekrana yazdırılması
print(s)
