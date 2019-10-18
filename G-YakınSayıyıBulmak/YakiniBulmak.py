enyakin2 = 0; yakinlik2 = -1;
# “sayi”nın girilmesi
sayi =  int(input())
# İlk “x” değerinin girilmesi
x = int(input())
# İlk değere göre değişkenlere değer atanması
enyakin = x
yakinlik = abs(x - sayi) 
for i in range(0,9):  
    # “x”in girilmesi   
    x = int(input())
    # Koşullar kontrol edilirken “yakinlik” ve “enyakin” değerlerin değiştirilmesi
    if abs(x - sayi) < yakinlik: 
        yakinlik = abs(x - sayi)
        enyakin = x
    else:
        if abs(x - sayi) == yakinlik:
            if x != enyakin:
                yakinlik2 = yakinlik
                enyakin2 = x
if (yakinlik2 == yakinlik):
    print("Diger en yakin sayi= ", enyakin2)
print("En yakin sayi= ", enyakin)