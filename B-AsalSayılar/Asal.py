import math
# 11’den 99’a kadar döngünün oluşturulması.
for i in range(11, 99):
    # “x”e yeni değerinin atanması
    x = 2
    j = 0
    # “x” ile “kök(i)+1” eşit olmadığı sürece:
    # “x” değeri hiçbir zaman (kök(i)+1) değeri ile “i”yi bölemez.
    # Bu yüzden bu değerin (kök(i)+1) üstünü kontrol etmeye gerek yoktur
    while (x != int(math.sqrt(i)) + 1):
        # “x”in “i”nin bir böleni olup olmadığının kontrol edilmesi
        if (i % x == 0):
            j = 1
            # En az bir bölen bulunursa sayının asal olmadığını öğrenmek için yeterlidir
            break
        else:
            x += 1

    if (j == 0):
        # Asal sayıların ekrana yazdırılması
        print(i)

