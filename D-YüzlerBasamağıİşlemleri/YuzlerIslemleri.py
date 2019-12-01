def is_tam_kare(x):
    t = 0
    for i in range(0, x // 2 + 2):
        if (x == i * i):
            t = 1
            break
    if (t == 1):
        # Sonuçların yazdırılması
        print("tam kare")
    else:
        print("tam kare degil")

# Değişkenlerin tanımlanması
tam_sayi = 0
kalan = 0
sayi = float(input())

# “sayı”nın int’e dönüştürülmesi
tam_sayi = int(sayi)

# Yüzler basamağının bulunması
tam_sayi = tam_sayi / 100
# kalan float çıktığı için tekrar tip dönüşümü yapılması
kalan = int(tam_sayi % 10)


# Koşulun kontrol edilmesi
if (kalan % 2 == 0):
    kalan = kalan * kalan * kalan
    is_tam_kare(kalan)
else:
    # Sonuçların yazdırılması
    print("cift degil")
