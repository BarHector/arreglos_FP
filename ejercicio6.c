/*
Leer 15 números en un rango de 20 a 50 y mostrar el arreglo 
y la suma de los pares, así como de los impares.
*/
#include <stdlib.h>

int main(){
	int array[15];
	int number= 0;
	int even_number= 0;
	int odd_number= 0;
	printf("Instrucciones: Ingresaras 15%cmeros en un rago de 20 a 50\n", 163);

	while (number<15){
		printf("Ingresa un n%cmero:    ", 163);
		scanf("%d", &array[number]);
		if(array[number]>=20 & array[number]<=50){
			number++;
		}else{
			printf("INGRESA UN N%cMERO QUE ESTE ENTRE 20 Y 50 \n", 233);
		}
	}

	number= 0;
	printf("Los n%cmeros ingresados son:\n", 163);

	while (number<15){
		printf("%d \t", array[number]);
		if (array[number]%2==0){
			even_number = even_number + array[number];
		}else{
			odd_number = odd_number + array[number];
		}
		number++;
	}

	printf("La suma de los n%cmeros pares ingresados es %d \n", 163, even_number);
	printf("La suma de los n%Cmeros impares ingresados es %d \n", 163, odd_number);
	return 0;
}