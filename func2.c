#include <stdio.h>

void print() {
	printf("Hola mundo\n");
}

void print2(int x) {
	printf("Has dicho %d", x);
}

int print3(int x) {
	printf("2*%d=%d", x, 2*x);
	return 2*x;
}

struct obj {
	int campo1, campo2;
	obj* x;
	void (*func1)(int, char, int);
};

int main(int argc, char* argv[]) {
	int (*funcion)(int);
	void (*func2)(int);
	funcion = &print3;
	func2 = &print2;
	int val = (*funcion)(5);
	(*func2)(val);
	return 0;
}
