def gir_mat():
  # Boyutun girilmesi
  print("Matrisin boyutunu giriniz: ")
  n = int(input()) 
  A = [[0 for i in range(n)] for i in range(n)]
  # İç içe döngüyle elemanların girilmesi
  print("A matrisini giriniz:")
  for i in range(n):
    for j in range(n):
      print('A[{}][{}]'.format(i+1, j+1))
      A[i][j] = int(input())
  return A; 

def print_mat(A):
  # İç içe döngüyle elemanların yazdırılması
  print("A Matrisi:")
  for i in range(len(A)):
    for j in range(len(A[0])):
      print(A[i][j], '  ', end="")
    print()
 
def satir_degistir(A): 
  # İstenen satırların girilmesi
  print("Degistirmek istediginiz satirlari girininz:\n");
  satir1 = int(input()) 
  satir2 = int(input())
  # Bir döngüyle istenen satırların elemanlarının geçici değişken kullanarak değiştirilmesi
  for i in range(len(A)):
    temp = A[satir1 - 1][i] 
    A[satir1 - 1][i] = A[satir2 - 1][i]
    A[satir2 - 1][i] = temp
  
  print("{}. satir & {}. satir degistirildi.".format(satir1, satir2))

# Bir döngüyle köşegenlerin elemanlarının geçici değişken kullanarak değiştirilmesi 
def kosegen_degistir(A):
  for i in range(len(A)):
    temp = A[i][i] 
    A[i][i] = A[i][len(A) - 1 - i]
    A[i][len(A) - 1 - i] = temp
  print("Kosegenler degistirildi.")

def ortalama(A): 
  toplam = 0 
  # İç içe döngüyle elemanların toplanması
  for i in range(len(A)):
    for j in range(len(A)):
      toplam += A[i][j]
  # Toplamın “n üzeri 2”ye bölünmesi
  ort = toplam / (len(A)*len(A))
  return ort

while True:
  # Seçenek listesinin yazdırılması
  print("""==============================
1- Yeni Matris girmek\n2- Matrisi yazdirmak
3- 2 satiri degistirmek\n4- Kosegenleri degistirmek
5- Elemanlar ortalamasini hesaplamak\n6- Exit
  Yukaridakilerden bir tane seciniz:""")
  secenek = int(input())
  # Girilen seçeneğe göre istenen fonksiyonun çağrılması
  if secenek == 1:
    A = gir_mat()
  elif secenek == 2:
    print_mat(A)
  elif secenek == 3:
    satir_degistir(A)
  elif secenek == 4:
    kosegen_degistir(A)
  elif secenek == 5:
    print('Ortalama= ', ortalama(A))
  elif secenek == 6:
    break
  else:
    print("Hata!, Girilecek sayi 1,6 arasinda olmalidir!")