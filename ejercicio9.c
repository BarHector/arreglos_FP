/*
Leer dos arreglos de 12 números cada uno, sumarlos y mostrar los tres arreglos.
*/
#include <stdio.h>

int main(){
	int array_One[12];
	int array_two[12];
	int array_three[12];
	int numb_one= 0;
	int number_two= 0;
	int number_three= 0;

	printf("Instrucciones: Ingresaras los 12 n%cmeros para llenar dos arrelgos(12 por cada uno)\n");
	
	printf("Primer arreglo \n");
	while (numb_one<12){
		printf("Ingresa un numero:   ");
		scanf("%d", &array_One[numb_one]);
		numb_one++;
	}
	
	printf("Segundo arreglo \n");
	while (number_two<12){
		printf("Ingresa un numero:   ");
		scanf("%d", &array_two[number_two]);
		number_two++;
	}
	
	numb_one= 0;
	number_two= 0;
	number_three= 0;

	printf("Los n%cmeros ingresados del primer arreglo son:\n", 163);
	while (numb_one<12){
		printf("%d \t", array_One[numb_one]);
		numb_one++;
	}

	printf("Los n%cmeros ingresados del segundo arreglo son:\n");
	while (number_two<12){
		printf("%d \t", array_two[number_two]);
		number_two++;
	}

	numb_one= 0;
	number_two= 0;
	
	printf("La suma de cada posicion de los arreglos es:\n");
	while (number_three<12){
		array_three[number_three] = array_One[numb_one] + array_two[number_two];
		printf("%d \t", array_three[number_three]);
		number_three++;
		number_two++;
		numb_one++;
	}
	return 0;
}