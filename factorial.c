#include <stdio.h>

int factorial(int x);

int main() {
	printf("Factorial: %d\n", factorial(20));
	return 0;
}

int factorial(int x) {
	if(x == 1) {
		return 1;
	} else {
		return x * factorial(x-1);
	}
}
