#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    bool beyaz_top[50];
    int beyaz, kirmizi, i, b;
    cout << "Beyaz Toplar: ";
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        b = 0;
        while (b == 0) {
            beyaz = rand() % (49) + 1;
            if (beyaz_top[beyaz] == false) {
                cout << beyaz << "\t";
                b = 1;
                beyaz_top[beyaz] = true;
            }
        }
    }
    kirmizi = rand() % (43) + 30;
    cout << "\nKirmizi Top: " << kirmizi;
    return 0;
}