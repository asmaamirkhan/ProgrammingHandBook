#include <iostream>


using namespace std;

int main() {
	cout << "Uc haneli bir sayi giriniz : ";
	int sayi;
	cin >> sayi;
	for (int i = 0; i < 3; ++i) {
		cout << sayi % 10 << '\n';
		sayi = sayi / 10;
	}
}
