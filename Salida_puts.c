#include <stdio.h>
#define T "Tambor de hojalta."

int main(){
	
//	char st[21]= "Todo puede hacerse";
	char px[] = "Juan sin miedo *";

	printf("%s %s \n", px, &px[4]);
	puts(px);
	puts(&px[4]);


/*	puts(T);
	puts("Permiso para salir en la foto.");
	puts(st);
	puts(&st[5]);
*/

	return 0;
}
