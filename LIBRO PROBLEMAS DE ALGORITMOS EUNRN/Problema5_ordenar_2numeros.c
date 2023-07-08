//Problema 5: pedir que se ingresen 2 numeros e indicar cual es mayor. Libro problemas de algoritmos
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1, num2;
	
	printf("Ingresa el numero 1. \n");
	scanf("%f", &num1);
	printf("Ingresa el numero 2. \n");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("El numero mayor es: %f \n", num1);
	}else if(num1 < num2) {
		printf("El numero mayor es: %f \n", num2);
	}else {
		printf("Los dos numeros son iguales \n");
	}
	
	return 0;
}
