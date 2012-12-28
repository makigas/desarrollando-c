#include <stdio.h>

struct fecha {
	char dia, mes;
	int anio;
};

struct fecha fecha_crear(char dia, char mes, int anio);
void fecha_print(struct fecha* f);
void fecha_incrementar(struct fecha *f);

int main(int argc, char* argv[]) {
	struct fecha f;
	f = fecha_crear(28, 12, 2012);
	fecha_print(&f);
	fecha_incrementar(f);
	fecha_print(&f);
	
	return 0;
}

struct fecha fecha_crear(char dia, char mes, int anio) {
	return (struct fecha) { dia, mes, anio };
}

void fecha_print(struct fecha* f) {
	printf("%d/%d/%d\n", f->dia, f->mes, f->anio);
}

void fecha_incrementar(struct fecha *f) {
	f.dia++;
	if(f.dia > 30) {
		f.dia = 1;
		f.mes++;
		if(f.mes > 12) {
			f.mes = 1;
			f.anio++;
		}
	}
	fecha_print(&f);
}
