#include <stdio.h>

union conversor {
	int valor;
	struct {
		char byte3, byte2, byte1, byte0;
	} bytes;
};

int main(int argc, char* argv[]) {
	union conversor num;
	
	num.valor = 4654165;
	num.bytes.byte1 = 200;
	printf("%d %d %d %d\n", num.bytes.byte3, num.bytes.byte2,
	num.bytes.byte1, num.bytes.byte0);
	printf("%d\n", num.valor);
	
	return 0;
}
