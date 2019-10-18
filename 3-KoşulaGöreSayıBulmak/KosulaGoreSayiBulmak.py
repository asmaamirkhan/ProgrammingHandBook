# “adet”in tanımlanması.
adet = 0

# 2’den 99’a kadar döngünün oluşturulması.
for i in range(2,100):
    # Koşulun kontrol edilmesi.
    if((i * 2 + 1) % 5 == 0):
        adet += 1

    # “adet”in ekrana yazdırılması.
    print("Adet= " , adet)