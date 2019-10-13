"""
Pythonda değişken tanımlarken
DataType(int,String,double...)'ını
belirtmenenize gerek yoktur.

"""

#Bu yılın tarihi icin "buyil" in tanımlanması

buyil =2019

#“isim” ve “yil”ın girilmesi

isim = input("Isminizi giriniz: ")
yil = int(input("Dogum yilinizi giriniz: "))


#“yas”ın değerinin hesaplanması

yas = buyil - yil

#“isim” ve “yas”ın ekrana yazdırılması

print("isminiz: ",isim,"Yasiniz: ",yas)