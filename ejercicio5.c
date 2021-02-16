/*
Leer 12 números en un rango de 10 a 30 y mostrar los números pares.
*/
#include <stdio.h>

int main(){
	int array[12];
	int number= 0;
	printf("Instrucciones: Ingresa 12 n%cmeros\n", 163);

	while(number<10){
		printf("Ingresa un n%cmero:  ", 163);
		scanf("%d", &array[number]);
		if(array[number] >=10 & array[number]<=30){
			number++;
		}else{
			printf("INGRESA UN N%cMERO QUE ESTE ENTRE 10 Y 30 \n", 233);
		}
	}

	printf("Los n%cmeros pares que ingresaste son:\n", 163);
	number= 0;
	
	while (number<10){
		if (array[number]%2==0)
		printf("%d \t", array[number]);
		number++;
	}
	
	return 0;
}