#include <stdio.h>

int main() {

	int x = 600;
	int i = 0;

	do {
		printf("%d (%d)\n", x, ++i);
		x = 2;
	} while(x < 100);
	
	return 0;
}
