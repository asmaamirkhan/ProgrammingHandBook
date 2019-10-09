#include <iostream>
#include <string>

using namespace std;
int main()
{
    // “i”, “x”, “j”nin tanımlanması.
    int i, x, j;

    // 11’den 99’a kadar döngünün oluşturulması.
    for (i = 11; i < 100; i++) 
    {
        // “x” ile “j”ye başlangıç değerinin atanması   
        x = 2;
        j = 0; 
   
        // “x” ile “i/2+1” eşit olmadığı sürece:
        // “x” değeri hiçbir zaman (i/2+1) değeri ile “i”yi bölemez.
        // Bu yüzden bu değerin (i/2+1) üstünü kontrol etmeye gerek yoktur
        while (x != i / 2 + 1)
        {
            // “x”in “i”nin bir böleni olup olmadığının kontrol edilmesi   
            if (i % x == 0) 
            {
                j = 1;

                // En az bir bölen bulunursa sayının asal olmadığını öğrenmek için yeterlidir
                break; 
            } else 
                x++;
    }
    if (j == 0)
        // Asal sayıların ekrana yazdırılması
        cout << i << " "; 
    }
 }


