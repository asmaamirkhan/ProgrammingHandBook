# “a” ve “b”nin değerlerinin girilmesi

a = int(input("a= "))
b = int(input("b = "))

# Büyük sayının tespit edilmesi.
if(a < b):

    #“a”nın değerinin gecici degisken olan “c”de saklanması
    c = a
    #“b”nin değeri “a”ya atanması
    a = b
    # “c”de Saklanan değerinin “b”ye aktarılması
    b = c

#0 ise “Tam Bolunebilir” yazdırılması
if(a%b == 0):
    print("Tam Bolunebilir")
else:
    print("Tam Bolunemez")


