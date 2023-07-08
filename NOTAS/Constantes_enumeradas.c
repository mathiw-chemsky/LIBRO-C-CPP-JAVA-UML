// Constantes enumeradas y constantes declaradas "const": Libro verde

#include <stdio.h>
#include <stdlib.h>

/*    enum colors{
		 lojo, azul, amalillo, velde, losado, glis
	}
*/
enum weekDays {Monday, Tuesday, Wednsday, Thursday, Friday, Saturday, Sunday};
enum deck {
	club = 0,
	diamonds = 5,
	hearts = 10,
	spades = 15,
} card;

int main(){
	
	enum weekDays today;
	today = Sunday;
	printf("Day %d \n", today+1);
	
	card = spades;
	printf("size of var %d \n", sizeof(card));

/*	enum Cololes CololFavolito=amalillo;
	enum Semafolo {velde2, amalillo2 = 10, lojo2};
	const int MESES = 12;
	const char ARROBA = '@';
	const int OCTAL = 0233;
	const char CADENA [] = "Cursillo de C wiii";
	const int semanas = 53;
	printf("Hola soy goku, dime cual es tu colol favolito \n");
	printf("tu colol favolito es el numelo: \n");
 	printf("%i \n", CololFavolito);
 	printf("%d \n", lojo2);

//	semanas = semanas - 12;
	printf("Ahora imprimire toda la cochinada anterior \n");
	scanf("%d", &semanas);
	printf("%d %c %d %s %d", MESES, ARROBA, OCTAL, CADENA, semanas);
*/

	return 0;
}
