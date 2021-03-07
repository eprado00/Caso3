#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
const int SIZE = 1000000;

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

	linearSearch(v, SIZE+1);
	

	return 0;
}
