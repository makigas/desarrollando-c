#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("%d\n", cuantos);
	
	int i;
	for(i = 0; i < cuantos; i++) {
		printf("%s\n", argv[i]);
	}
	
	return 0;
}
