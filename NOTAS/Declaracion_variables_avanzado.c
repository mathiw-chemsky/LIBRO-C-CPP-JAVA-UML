/* Declaración avanzada de variables (Platzy, Introducción a C
*/
#include <stdio.h>
#include <stdlib.h>
//Variable Declaration
extern int a, b, c;

float f, g, h;

int main(){
	

// Variable Definition
    int a, b, c;

//Variable Initialization
	f = -1000000;
	g = -2147483647;
	
	h = g + f;
	printf("Value of sum is: %f \n", h);
	return 0;
}
