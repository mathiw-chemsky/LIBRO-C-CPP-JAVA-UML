/* Tema: 5.6.- Expresiones condicionales: el operador ?:
En este tema se aborda el uso del condicional ?: o condicional ternario con una sintaxis de la siguiente forma:
SINTAXIS
		condici�n  ?  expresi�n_1  :  expresi�n_2
		
		condici�n = es una expresi�n l�gica
		expresi�n_1_y_2 = son cualquier expresi�n
		
si se cumple la condici�n se devuelve como resultado la expresi�n_1, sino se devuelve la expresi�n_2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ejemplo 1: variable elegida seg�n condici�n
int main(){
	
	int a;
	int b;
	char variable_1 = 'V';
	char variable_2 = 'F';
	
	//Solicitamos la informaci�n al usuario de las 4 variables
	printf("Escribe el valor del primer n�mero. \n");
	scanf("%d", &a);
	printf("Ahora escribe el valor del segundo n�mero. \n");
	scanf("%d", &b);
//	printf("Ahora escribe un caract�r para verdadero.");
//	scanf("%c", &variable_1);
//	printf("Escribe un caracter para falso.");
//	scanf("%c", &variable_2);

	
	// Creamos la estructura condicional con la sintaxis mencionada
	
	a == b  ?  printf("La respuesta es: %c \n",variable_1)  :  printf("La respuesta es: %c \n",variable_2);


	//ahora creamos otro ejemplo (5.15 del libro)
	int n1, n2;
	
	printf("Introduzca dos numeros positivos o negativos: \n");
	scanf("%d %d", &n1, &n2);

	//Probamos selecci�n con if-else
	if (n1 > n2)
	   printf("%d > %d. \n", n1, n2);
	else
	   printf("%d <= %d. \n", n1, n2);
	   
	   printf("---------------------------------------------------------- \n");
	   
	//Probamos el m�smo problema pero con condicional ternario ? :
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
