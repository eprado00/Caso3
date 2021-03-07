#include <iostream>
#include <chrono>
#include <vector>
#include <stdio.h>

using namespace std;
const long int SIZE = 3000000;

void linearSearch(vector<int> pVector, int pNumber){
	bool found = false;
	int position = 0;
	for(int number : pVector){
		if(number == pNumber){
			cout<<"El numero buscado esta en la posicion "<<position<<endl;
			found = true;
			break;
		}
		position ++;
		
	}
	if(!found)
		cout<<"El numero no fue encontrado"<<endl;
}


int main(){
	vector<int> v;
 	for (int i = 0; i<SIZE; i++){
		v.push_back(i+1);
	}

	float ini, fin;
	float result;

	//Primera instancia de tiempo
	ini=clock();

	linearSearch(v, SIZE+1);

	//Segunda instancia de tiempo
	fin = clock();
	
	cout<<"La llamada tardo "<<(float)((fin-ini)/CLOCKS_PER_SEC)*1000<<" milisegundos en completarse"<<endl;//Milisegundos

	
	return 0;
}
