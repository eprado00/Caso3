#include <stdio.h>
#include <sys/time.h>
#include <string.h>

void setArray(int* pArray, int pSize){
    for (int i = 0; i < pSize; ++i) {
        pArray[i] = rand();
    }
}

void searchNumber(int pArray[], int pSize, int pNum){
    for(int index = 0; index < pSize; index++){
        if (pArray[index] == pNum){
            printf("El numero %d se encuentra en la posicion %d\n", pNum, index);
            return;
        }
    }
    printf("El numero %d no se encuentra en la lista\n", pNum);
}

int main(){   //si se desea cambiar el tamaño del array se debe cambiar el valor /*size*/ del main siendo 519 264 el maximo

    int array[/*size*/500000] = {0};

    setArray(array,/*size*/500000);

    clock_t inicio = clock();

    searchNumber(array, /*size*/500000, 997946531);

    printf("tiempo: %f", inicio);
    clock_t fin = clock();

    clock_t time = (double)(fin - inicio)/ CLOCKS_PER_SEC;

    printf("tiempo: %f", inicio);

}