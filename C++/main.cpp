#include <iostream>
#include <chrono>
#include <vector>
#include <stdio.h>

using namespace std;
const long int SIZE = 100000;

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
	cout<<"Fin \n";
}

int main(){
	vector<int> v;
 	for (int i = 0; i<SIZE; i++){
		v.push_back(i+1);
	}

	int ini, fin;
	double result;

	ini=clock();

	linearSearch(v, SIZE+1);

	fin = clock();
	
	cout<<"Tiempo en milisegundos "<<(double)(fin-ini)/CLOCKS_PER_SEC<<endl;

	
	

	return 0;
}
