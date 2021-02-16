/*
Leer 10 números, solicitar al usuario otro número. Mostrar el arreglo 
y cuantas veces aparece el número que dio el usuario. 
*/
#include <stdio.h>


int main(){
	int array[10];
	int number= 0;
	int find= 0;
	int numer2= 0;
	
	printf("Instrucciones: Ingresa 10 n%cmeros, ingresaras otro para ver si aparece en los 10", 163);

	while(number <10){
		printf("Ingresa un numero    ");
		scanf("%d", &array[number]);
		number++;
	}
	
	printf("Ingresa un n%cmero para ver si aparece en los numeros ingresados:   ", 163);
	scanf("%d", &find);
	printf("Los n%cmeros ingresados son: \n", 163);
	number= 0;

	while(number<10){
		if (find==array[number]){
			numer2++;
		}
		printf("%d \t", array[number]);
		number++;
	}
	
	printf("\nEl ultimo n%cmero que ingresaste aparece en %d posicion(es)", 163, numer2);
	return 0;
}