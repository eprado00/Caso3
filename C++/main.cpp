#include <iostream>


using namespace std;
const int SIZE = 100000;

void linearSearch(int pArray[], int pNumber){
	bool found = false;
	for(int i = 0; i<SIZE; i++){
		if(pArray[i] == pNumber){
			cout<<"El numero buscado esta en la posicion "<< i<<endl;
			found = true;
			break;
		}
		
	}
	if(!found)
		cout<<"El numero no fue encontrado"<<endl;
	cout<<"Fin \n";
}

int main(){

	int array[SIZE];
	for (int i = 0; i<SIZE; i++){
		array[i] = i+1;
	}

  linearSearch(array, SIZE+1);

  return 0;
}
