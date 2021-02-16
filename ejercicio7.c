/*
Leer 12 números en un rango de 5 a 25 y mostrar el arreglo.
Se mecnionara cuales son números pares y cuales impares.
*/
#include <stdio.h>

int main(){
	int array[12];
	int number= 0;

	printf("Instrucciones: Ingresa 12 n%cmeros en un rango de 5 a 25\n", 163);
	
	while (number<12){
		printf("Ingresa un numero:    ");
		scanf("%d", &array[number]);
		if(array[number]>=5 & array[number]<=25){
			number++;
		}else{
			printf("INGRESA UN N%cMERO QUE ESTE ENTRE 5 Y 25 \n", 233);
		}
	}
	
	number= 0;
	printf("Los n%cmeros ingresados son:\n", 163);
	
	while (number<12){
		printf("%d \t", array[number]);
		number++;
	}
	
	number= 0;
	
	while (number<12){
		if(array[number]%2==0){
			printf("Par %d \n", array[number]);
		}else{
			printf("Impar %d \n", array[number]);
		}
		number++;
	}
	return 0;
}