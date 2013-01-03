#include <stdio.h>			// Necesario para hacer printf.
#include <stdlib.h>			// Necesario para hacer malloc y free.

int main(int argc, char* argv[]) {
	
	int* numeros;
	numeros = malloc(sizeof(int) * 2000);
	
	numeros[1234] = 1234;
	printf("%d", numeros[1234]);
	
	free(numeros);
	
	return 0;				// Terminar la ejecución del programa.
}
