ondalik_h = 0; tam_h = 0
sayi = float(input())
sayi1 = sayi

# “t_sayi”ya sayının tam değerinin atanması
t_sayi = int(sayi)
while t_sayi != 0: 
  # “t_sayi” 10’a bölüp “tam_h”nın artırılması   
  t_sayi = t_sayi // 10
  tam_h += 1

while sayi % 10 != 0:
  # “sayi” 10’la çarpıp “ondalik_h”nın artırılması   
  sayi = sayi * 10 
  ondalik_h += 1 

# Sonuçların ekrana yazdırılması
print('Tam kisminin hane sayisi=',  tam_h); 
if sayi1 % 10 != 0:
  # `sayı%10=0` olması için birlerin 0 olması lazım ama hane 
  # sayısına bir fazla eklemiş olduğumuzdan yazdırmadan önce sayıyı 1 azaltırız.
  print('Ondalik kisminin hane sayisi=', ondalik_h - 1)
else:
  print('Ondalik kisminin hane sayisi= ', ondalik_h)