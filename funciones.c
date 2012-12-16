#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int sumatorio(int a);
int factorial(int a);

int main() {
	int a = 5, b = 4;
	int resultado;
	resultado = multiplicacion(a, b);
	printf("%d * %d = %d\n", a, b, resultado);
	
	printf("sumatorio de %d es %d\n", resultado, sumatorio(resultado));
	printf("factorial de %d es %d\n", 5, factorial(5));
	
	return 0;
}

int suma(int a, int b) {
	return a + b;
}

int resta(int a, int b) {
	return a - b;
}

int multiplicacion(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}

int sumatorio(int a) {
	int i, acumuladora = 0;
	for(i = 1; i <= a; i++) {
		acumuladora += i;
	}
	return acumuladora;
}

int factorial(int a) {
	if(a == 1) {
		return 1;
	} else {
		return a * factorial(a - 1);
	}
}
