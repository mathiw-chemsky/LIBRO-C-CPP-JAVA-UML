// Ejercicios del libro capitulo 4 operadores
#include <stdio.h>
#include <stdlib.h>
const int M = 6;

int main(){
	
	int a, b, c;
	puts("Introduce el valor de a y b \n");
	scanf("%d %d", &a, &b);
	c = 2 * a - b;
	c -= M;
	b = a + c - M;
	a = b *M;
	printf("\n a = %d \n", a);
	b = -1;
	printf(" %6d %6d", b, c);

	return 0;
}
