// Problema 3: Mostrar el perimetro de una circunferencia, siempre y cuando el radio
// que se ingrese sea mayor a cero (controlar el ingreso) Libro de problemas de algoritmos eunrn
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416


int main(){
	
	float radio, perimetro;
	
	printf("Ingresar el valor del radio. \n");
	scanf("%f", &radio);
//	perimetro = radio * PI; // La primera opción es declarar una variable "perimetro" y operar antes,
	
	if(radio > 0){
		printf("El perimetro del circulo es: %f * %f = %f \n", radio, PI, radio*PI); //Otra opción es no usar una variable "perimetro" y operar en la misma impresion
	} else {
		printf("Elol Elol Elol, el ladio no es mayol a 0(celo), vuelva a ejecutal e inglese un valol mayol a 0. \n");
	}


	return 0;
}
