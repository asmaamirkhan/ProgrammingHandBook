# Boyutların girilmesi
print("Matrislerin satir sayisini giriniz (m)=")
m = int(input())
print("Matrislerin sutun sayisini giriniz (n)=")
n = int(input())

# “A” matrisinin oluşturulması
A = [[0 for i in range(n)] for i in range(m)]

# “A” matrisinin girilmesi
print("A matrisini giriniz:")
for i in range(m):
    for j in range(n):
        print('A[{}][{}]'.format(i+1, j+1))
        A[i][j] = int(input())

# “B” matrisinin oluşturulması
B = [[0 for i in range(n)] for i in range(m)]

# “B” matrisinin girilmesi
print("B matrisini giriniz:")
for i in range(m):
    for j in range(n):
        print('B[{}][{}]'.format(i+1, j+1))
        B[i][j] = int(input())

# “C” matrisinin oluşturulması
C = [[0 for i in range(n)] for i in range(m)]

# İç içe döngü kullanarak karşılıklı elemanların toplanması
for i in range(m):
    for j in range(n):
        C[i][j] = A[i][j] + B[i][j]

# Sonucun yazdırılması
print(C)

# Not: daha verimli işlemler için NumPy kütüphanesini araştır