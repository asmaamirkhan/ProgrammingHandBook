# “i”, “f”, “n” tanımlanması
n = 0
i = 0
f = 1

# “n”nin değerinin girilmesi
n = int(input("n= "))

# n!’i hesaplayan döngünün oluşturulması.
# “i=1” olduğunda sonucu etkilemeyeceği için “i=2”den başlıyoruz.
# range() foksiyonun özelliğinden dolayı range fonsiyonu bitiş değeri
# n+1 olarak vereceğiz.
for i in range(2,n+1):
    # “f” değerini i sayacının değerleriyle çarpacak işlem
    f = f * i

# “f”nin değerinin yazdırılması
print("n!=",f)
