#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <string.h>

#define BILLION  1000000000.0

void setArray(int* pArray, int pSize){
    for (int i = 0; i < pSize; ++i) {
        pArray[i] = rand();
    }
}

void searchNumber(int pArray[], int pSize, int pNum){

    int found = 0;
    for(int index = 0; index < pSize; index++){
        if (pArray[index] == pNum){
            printf("El numero %d se encuentra en la posicion %d\n", pNum, index);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("El numero %d no se encuentra en la lista\n", pNum);
    }

}

int main(){   //si se desea cambiar el tamaño del array se debe cambiar el valor /*size*/ del main siendo 519`250 el maximo

    int array[/*size*/519250] = {0};
    setArray(array,/*size*/519250);

    //array[519249] = -1;

    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);

    searchNumber(array, /*size*/519250, -1);


    clock_gettime(CLOCK_REALTIME, &end);
    double time_spent = (end.tv_sec - start.tv_sec) +
                        (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("Time elpased is %f seconds", time_spent);

    return 0;
}