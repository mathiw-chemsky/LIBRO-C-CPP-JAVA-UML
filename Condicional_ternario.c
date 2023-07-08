/* Tema: 5.6.- Expresiones condicionales: el operador ?:
En este tema se aborda el uso del condicional ?: o condicional ternario con una sintaxis de la siguiente forma:
SINTAXIS
		condición  ?  expresión_1  :  expresión_2
		
		condición = es una expresión lógica
		expresión_1_y_2 = son cualquier expresión
		
si se cumple la condición se devuelve como resultado la expresión_1, sino se devuelve la expresión_2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ejemplo 1: variable elegida según condición
int main(){
	
	int a;
	int b;
	char variable_1 = 'V';
	char variable_2 = 'F';
	
	//Solicitamos la información al usuario de las 4 variables
	printf("Escribe el valor del primer número. \n");
	scanf("%d", &a);
	printf("Ahora escribe el valor del segundo número. \n");
	scanf("%d", &b);
//	printf("Ahora escribe un caractér para verdadero.");
//	scanf("%c", &variable_1);
//	printf("Escribe un caracter para falso.");
//	scanf("%c", &variable_2);

	
	// Creamos la estructura condicional con la sintaxis mencionada
	
	a == b  ?  printf("La respuesta es: %c \n",variable_1)  :  printf("La respuesta es: %c \n",variable_2);


	//ahora creamos otro ejemplo (5.15 del libro)
	int n1, n2;
	
	printf("Introduzca dos numeros positivos o negativos: \n");
	scanf("%d %d", &n1, &n2);

	//Probamos selección con if-else
	if (n1 > n2)
	   printf("%d > %d. \n", n1, n2);
	else
	   printf("%d <= %d. \n", n1, n2);
	   
	   printf("---------------------------------------------------------- \n");
	   
	//Probamos el mísmo problema pero con condicional ternario ? :
	n1 > n2 ? printf("%d > %d. \n", n1,n2)  : printf("%d <= %d. \n", n1,n2);
	

	printf("---------------------------------------------------------- \n");
	
	int nota;
	
	printf("Ingrese nota. \n");
	scanf("%d", &nota);
	if (nota < 0 || nota > 100)
	{
		printf("%d no es una nota valida. \n", nota);
		printf("?");
	}
	if ((nota >= 90) && (nota < 100))
  	   printf("A");
	if ((nota >= 80) && (nota < 90))
 	    printf("B");
	if ((nota >= 70) && (nota < 80))
	    printf("C");
	if ((nota >= 60) && (nota < 70))
  	   printf("D");
	if (nota < 60)
 	   printf("F");

	return 0;
}
