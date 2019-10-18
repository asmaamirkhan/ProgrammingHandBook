# Değişkenlerin tanımlanması
i = 2
print("Payi gir:")
# Pay ve paydanın girilmesi
pay = int(input())
print("Paydayi gir:")
payda = int(input())
# Pay ve paydanın küçüğünün tespit edilmesi
if (pay > payda): 
    kucuk = abs(payda);
else:
    kucuk = abs(pay);
while i <= kucuk:
    if pay % i == 0 and payda % i == 0:
    # pay, payda ve “kucuk” “i”ye bölünmesi
        pay /= i 
        payda /= i
        kucuk /= i
        i = 2
    else:
        i += 1

# Kesrin son halinin yazdırılması
print("{} / {}".format(pay, payda))
