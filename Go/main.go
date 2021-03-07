package main
import ("fmt"
		"time"
)
//Constante de tamaño
const SIZE  int = 10000000


func main(){
	//Se declara el arreglo
	var testArray [SIZE]int

	//Se introducen elementos al arreglo
	for i:=0; i<SIZE; i++{
		testArray[i] = i+1;
	}

	//Llamada a la funcion
	initialTime := time.Now()

	linearSearch(testArray, SIZE+1)

	endTime := time.Now()
	final:=endTime.Sub(initialTime)
	fmt.Printf("La llamada tardo %v en correr ms\n", final.Nanoseconds())//Nanosegundos
}

func linearSearch(pArray [SIZE]int, pNumber int){
	/*
	*Funcion de busqueda linear:
	*Recorre el arreglo y si encuentra el numero 
	*buscado imprime la posicion
	*Si recorre todo el arreglo y no lo encuentra 
	*imprime ese resultado
	*/

	var found bool = false;
	for i:=0; i<SIZE; i++{
		if pArray[i] == pNumber{
			fmt.Println("El numero buscado esta en la posicion ", i)
			found = true;
			break;
		}
	}
	if !found{
		fmt.Println("El numero no fue encontrado");
	}

}
