/*
Leer 10 números  y mostrar el arreglo.
*/
#include <stdio.h>

int main(){
	int array[10]; 
	int number=0;
	printf("Intrucciones: Ingresa 10 n%cmeros, enteros\n", 163);
	while (number<10){
		printf("Ingresa un n%cmero\n", 163);
		scanf("%d", &array[number]);
		number++;
	}

	printf("Los n%cmeros ingresados son: \n", 163);
	number= 0;
	
	while (number<10){
		printf("%d \t", array[number]);
		number++;
	}

	return 0;
}