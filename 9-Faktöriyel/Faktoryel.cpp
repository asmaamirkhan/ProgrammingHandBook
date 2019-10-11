#include <iostream>

using namespace std;
int main()
{
    // “i”, “f”, “n” tanımlanması
    int i, n, f = 1;
    cout << "n=";
  
    // “n”nin değerinin girilmesi
    cin >> n;

    // n!’i hesaplayan döngünün oluşturulması
    // “i=1” olduğunda sonucu etkilemeyeceği için “i=2”den başlıyoruz
    for (i = 2; i <= n; i++)

        // “f” değerini i sayacının değerleriyle çarpacak işlem
        f = f * i; 

    // “f”nin değerinin yazdırılması
    cout << "n!=" << f;
 }