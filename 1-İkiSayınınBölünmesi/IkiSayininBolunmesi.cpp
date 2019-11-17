#include <iostream>

using namespace std;
int main()
{
    // “a”, “b”, “c” tanımlanması
    int a, b, c;
    cout<< "a= ";
  
    // “a” ve “b”nin değerlerinin girilmesi
    cin >> a;
    cout << "b= ";
    cin >> b;

    // Büyük sayının tespit edilmesi.
    if (a < b)
    {
        // “a”nın değerinin “c”de saklanması  
        c = a;
        // “b”nin değeri “a”ya atanması
        a = b;
        // “c”de Saklanan değerinin “b”ye aktarılması
        b = c; 
    }
  
    // 0 ise “Tam Bolunebilir” yazdırılması
    if (a % b == 0) 
        cout << "Tam Bolunebilir";
    // 0 değilse “Tam Bolunemez” yazdırılması
    else 
        cout << "Tam Bolunemez";
    
    return 0;
}
