# “x” ve “i”nin tanımlanması
x = 0
i = 0

print("3 haneli sayi giriniz: ")

# “x”in girilmesi
x = int(input())

# 3 kere dönen döngünün oluşturulması
for i in range(0,3):
    #  Kalanın yazdırılması
    print(x % 10)

    # “x”in onlar basamağının birler basamağına dönüştürülmesi
    x = x / 10
