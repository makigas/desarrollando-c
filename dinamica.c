#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int *x;						// creo un puntero
	x = malloc(sizeof(int));	// inicializo con memoria dinamica
	*x = 5;
	
	printf("%d\n", *x);
	
	free(x);
	
	return 0;
}
