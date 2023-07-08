#include <stdio.h>
#include <stdlib.h>

#define ESP \n
#define PI 3.141592
#define DIOS 333
#define PIZZACOST 1.5

const char NL = '\n';

int main(){

	float costoPizzas;
	float numberOfSlices = 3;
	
	costoPizzas = PIZZACOST + numberOfSlices;
	
	printf("Total bill: %f %c", costoPizzas, NL);
	
	printf("Hola %c", NL);
	printf("Bienvenido a esta cosa de prueba. %c", NL);
	printf("El valor del universo es: %d %c", DIOS, NL);
	printf("Y esta relacionado directamente con: %f %c", PI, NL);
	
	
	return 0;
}
