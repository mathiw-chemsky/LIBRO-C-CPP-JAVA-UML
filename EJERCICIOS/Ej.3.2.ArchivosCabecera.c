/* Nombre del archivo: Ej.3.2.archivosCabecera, el cual utilizará dos archivos de cabecera específicos en un array de caracteres */
#include <stdio.h> /* para imprimir cosillas generales o algo así jejeje, es decir para printf */
#include <string.h> /* para imprimir funciones cadena de caracteres, es decir para strcpy */

int main(){
	char mensaje[20];
	strcpy (mensaje, "Atapuerca Cacatua Urrakarrana\n");
	/*
	  Las dos lineas anteriores se pueden sustituir por:
	  char mensaje[20] = "Atapuerca Cacatua\n";
	*/
	printf (mensaje);
	return 0;
}
