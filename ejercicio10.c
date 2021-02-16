/*
Leer 20 números, almacenar en otro arreglo los pares y en otro los impares. Mostrar los tres arreglos.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int array[20];
	int oddnumber[0];
	int evennumber[0];
	int number= 0;
	
	printf("Instrucciones: Ingresa 20 n%cmeros, uno a la vez\n");
	while (number<20){
		printf("Ingresa un numero:    ");
		scanf("%d", &array[number]);
		number++;
	}
	
	number= 0;
	printf("LOS NUMEROS INGRESADOS SON: \n");
	while (number<20){
		printf("%d \t", array[number]);	
		number++;
	}

	number= 0;
	printf("LOS NUMEROS PARES INGRESADOS SON: \n");
	while (number < 20){
		if (array[number]%2==0){
			array[number]=oddnumber[number];
			printf("%d \t", oddnumber[number]);
		}
		number++;
	}

	number= 0;
	printf("LOS NUMEROS IMPARES INGRESADOS SON: \n");
	while (number < 20){
		if(array[number]%2 !=0){
			array[number] = evennumber[number];
			printf("%d \t", evennumber[number]);
		}
		number++;
	}

	return 0;
}