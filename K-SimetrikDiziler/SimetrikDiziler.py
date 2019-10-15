# Değişkenlerin tanımlanması
b = 1
print("Boyut=")
# Boyutun girilmesi
boyut = int(input())
# Dizinin tanımlanması
A = []
# “boyut” kere dönen döngü kullanarak elemanların girilmesi
for i in range(boyut):
    print("A[{}]=".format(i + 1))
    A.append(int(input()))
  
# Dizinin başından merkezine kadar tarayan döngünün oluşturulması
for i in range(boyut // 2):
    # Simetrik elemanlar eşitlik kontrolu 
    if A[i] != A[boyut - 1 - i]:
        b = 0
        break

# “b”ye göre sonucun yazdırılması
if b == 1: 
   print("A dizisi simetriktir")
else:
   print("A dizisi simetrik degildir")