# 11’den 99’a kadar döngünün oluşturulması.
for i in range(11, 100):
    # “x”e yeni değerinin atanması
    x = 2
    j = 0
    # “x” ile “i” eşit olmadığı sürece:
    # döngü devam edecek
    while (x != i):
        # “x”in “i”nin bir böleni olup olmadığının kontrol edilmesi
        if (i%x == 0):
            j =1
            # En az bir bölen bulunursa sayının asal olmadığını öğrenmek için yeterlidir
            break
        else:
            x += 1

    if (j == 0):
        # Asal sayıların ekrana yazdırılması
        print(i)

