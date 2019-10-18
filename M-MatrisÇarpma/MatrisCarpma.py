# İki matrisin boyutlarının girilmesi
print("A(m,n) Boyutlarini giriniz:")
m = int(input())
n = int(input())
print("B(f,p) Boyutlarini giriniz:")
f = int(input())
p = int(input())

# Çarpım koşulunun kontrol edilmesi
if n != f:
    print("Matrisler carpilamaz")
else:
    # Matrislerin oluşturulması
    A = [[0 for i in range(n)] for i in range(m)]
    B = [[0 for i in range(p)] for i in range(f)]
    C = [[0 for i in range(p)] for i in range(m)]

    # “A” matrisinin girilmesi
    print("A matrisini giriniz:")
    for i in range(m):
        for j in range(n):
            print('A[{}][{}]'.format(i+1, j+1))
            A[i][j] = int(input())
    
    # “B” matrisinin girilmesi
    print("B matrisini giriniz:")
    for i in range(f):
        for j in range(p):
            print('B[{}][{}]'.format(i+1, j+1))
            B[i][j] = int(input())
        
    # Çarpımın hesaplanması 
    for i in range(m):
        for j in range(p):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j];

print(C)