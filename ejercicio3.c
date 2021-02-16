/*
Leer una palabra de 10 caracteres y mostrar la palabra.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char palabra[10];
	printf("Intrsucciones: Ingresa una palabra menor a 10 letras:\n");
	scanf("%s", palabra);

	if (strlen(palabra)>10){
	//strlen() -> Cuenta el número de caracteres que hay en una cadena y devuelve dicho número
		printf("La palabra tiene mas de 10 letras y no se puede mostrar\n");
	}else{
		printf("La palabra ingresada es: %s\n", palabra);	
	}
	
	return 0;
}