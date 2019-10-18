# faktoryel fonksiyonun yazılması
def faktoriyel(a):
    f = 1
    i = 0
    for i in range(2,a+1):
        f = f * i
    return f

# “toplam”,“n” ve “i”nin tanımlanması.
n = 10
i = 0
toplam = 0

# 1’den 10’a kadar döngünün oluşturulması
for i in range(1,11):
    # “i”ye göre terim değerinin hesaplanıp önceki toplama eklenmesi
    toplam = toplam + (i + (n - i) / faktoriyel(i))

# Formül sonucunun ekrana yazdırılması
print(toplam)