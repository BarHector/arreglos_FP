/*
Solicitar al usuario cuantos números desea leer, mostrar el arreglo.
*/
#include <stdio.h>

int main(){
	int number= 0;
	int size= 0;

	printf("Instrucciones: Ingresaras el tama%co del arreglo y despues añadiras los n%cmeros\n", 164, 163);
	printf("Tama%co del arreglo: ", 164);
	scanf("%d", &size);
	int array[size];
	//Para definir el tamaño de un arreglo por medio del usario primero hay que pedir el tamaño
	//despues se declara el arreglo y entre corchetes la variable que se uso para leer.
	
	while (number <size){
		printf("Ingresa un n%cmero: ", 163);
		scanf("%d", &array[number]);
		number++;
	}
	
	printf("Los n%cmeros ingresados son:\n", 163);
	number= 0;
	
	while(number<size){
		printf("%d \t", array[number]);
		number++;
	}
	
	return 0;
}