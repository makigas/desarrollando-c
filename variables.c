#include <stdio.h>

int main() {
	printf("El tipo char mide: %d.\n", sizeof(char) * 8);
	printf("El tipo short mide: %d.\n", sizeof(short) * 8);
	printf("El tipo int mide: %d.\n", sizeof(int) * 8);
	printf("El tipo long mide: %d.\n", sizeof(long) * 8);
	printf("El tipo long long mide: %d.\n", sizeof(long long) * 8);
	return 0;
}
