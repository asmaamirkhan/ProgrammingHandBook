// C++ dilinde float türü girdiler beklenenden biraz farklı saklandığı için diğer
//dillerde geçerli yöntemlerin kodlamaya yeni başlayanları zorlayacağını düşündüğümüzden
//bu soruyu farklı bir yöntemle çözmeyi yeğledik. 
//Float tipiyle ilgili daha fazla bilgi almak için http://floating-point-gui.de/
//adresine göz atabilirsiniz.



#include <iostream>
#include <string>

using namespace std;

int main(){
	string sayi;
	cout<<"Sayi giriniz: ";
	cin>>sayi;
	
	int tamKisim = 0;
	int ondalikKisim = 0;
	
	for(int i = 0; i < sayi.size(); ++i){
		if(sayi[i] != '.'){
			tamKisim++;
		}else{
			break;
		}
	}
	
	int nokta = 0;
	
	for(int i = 0; i < sayi.size(); ++i){
		if(sayi[i] == '.'){
			nokta = i;
		}
		if(nokta < i){
			ondalikKisim++;
		}
			
	}
	
	cout<<"Tam kismin hane sayisi: "<<tamKisim<<endl; 
	cout<<"Ondalik kismin hane sayisi: "<<ondalikKisim<<endl;
}