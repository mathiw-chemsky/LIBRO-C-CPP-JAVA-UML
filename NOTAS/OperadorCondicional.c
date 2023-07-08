
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int num1;
	int num2;
	int menor;
	
	//Solicitud de info
	printf("Ingrese dos numeros. \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	//Expresión condicional con operador "?" (sí la condicion anterior se cumple) y ":" (Si no entonces)
	menor = num1 <= num2 ? num1 : num2;
	printf("El menor es: %d ", menor);
	
	
	return 0;
}
