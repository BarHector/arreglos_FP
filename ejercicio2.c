/*
Leer 10 números reales y mostrar el arreglo.
*/
#include <stdio.h>

int main(){
	float array[10];
	int number= 0.0;
	printf("Intrucciones: Ingresa 10 n%cmeros reales", 163);

	while (number<10){
		printf("Ingresa un n%cmero real:  ", 163);
		scanf("%f", &array[number]);
		number++;
	}

	printf("Los n%cmeros ingresados son: \n", 163);
	number= 0;

	while (number<10){
		printf("%f \t", array[number]);
		number++;
	}
	return 0;
}