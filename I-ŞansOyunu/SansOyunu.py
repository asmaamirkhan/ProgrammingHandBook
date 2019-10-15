import random
beyaz_top = [False] * 50
print("Beyaz Toplar: ")
for i in range(0, 5):
    b = 0
    while b == 0: 
        beyaz = random.randint(1, 50)
        if beyaz_top[beyaz] == False:
            print(beyaz)
            b = 1
            beyaz_top[beyaz] = True;
    
kirmizi = random.randint(30, 73)
print("Kirmizi Top: ", kirmizi)