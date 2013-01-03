#include <stdio.h>

enum DIASSEM { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

struct fecha {
	char dia, mes;
	int anio;
	enum DIASSEM diasem;
};

int main(int argc, char* argv[]) {
	struct fecha f;
	f.dia = 15;
	f.mes = 11;
	f.anio = 2010;
	f.diasem = JUEVES;
	
	printf("%d/%d/%d\n", f.dia, f.mes, f.anio);
	
	switch(f.diasem) {
		case LUNES:
			printf("lunes\n");
			break;
		case MARTES:
			printf("martes\n");
			break;
		case MIERCOLES:
			printf("miercoles\n");
			break;
		case JUEVES:
			printf("jueves\n");
			break;
		case VIERNES:
			printf("viernes\n");
			break;
		case SABADO:
			printf("sabado\n");
			break;
		case DOMINGO:
			printf("domingo\n");
			break;
	}
	
	return 0;
}
