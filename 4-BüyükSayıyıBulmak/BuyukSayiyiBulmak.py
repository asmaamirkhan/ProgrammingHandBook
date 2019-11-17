# İlk sayının döngüye girmeden kullanıcıdan girilmesi
sayi = int(input("10 Sayi giriniz: "))

# Girilen sayının “buyuk”e atanması
buyuk = sayi

# “10-1” kere dönen döngünün oluşturulması
for i in range(0,9):
    # Sayıların girilmesi
    sayi = int(input())

    # Sayının “buyuk”le karşılaştırılması
    if(sayi > buyuk):
        buyuk = sayi

#  “buyuk”ün ekrana yazdırılması.
print("En Buyuk sayi= ", buyuk)