#import <iostream>

 using namespace std;

int main(){
	int secenek;
	cin>>secenek;
   switch(secenek) {
   case 1  :
	  gir_mat();
      break; 
   case 2  :
      statement(s);
      break; 
   case 3  :
      statement(s);
      break; 
   case 4  :
      statement(s);
      break; 
   case 5  :
      statement(s);
      break; 
	case 6  :
      statement(s);
      break; 
}

int** gir_mat(){int boyut;
    cout<<"Kare matrisin boyutunu giriniz: ";
	cin>>boyut;
	int** matris;
	int boyut;
	matris = new int* [boyut];
    int i;
    for(i=0; i < boyut; i++){
        matris[i] = new int [boyut];
    }
	int girdi;
	cout<<"Elemanlari teker teker giriniz."<<endl;
	for(int i = 0; i < boyut; ++i){
		for(int j = 0; j < boyut; ++j){
			matris[i][j] = girdi;
		}
	}
} 

} 
 