#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int i;
	for(i = 1; i < 10; i++) {
		printf("Introduce un numero: ");
		scanf("%d", &num);
		fflush(stdin);
		printf("Has introducido el %d.\n", num);
	}
		return 0;
}
