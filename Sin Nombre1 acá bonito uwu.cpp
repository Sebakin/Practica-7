#include <stdio.h>
/*
 Este programa muestra la manera en la que se declaran y asignan variables
 de diferentes tipos: num�ricas (enteras y reales) y caracteres, as� como
 la manera en la que se imprimen los diferentes tipos de datos.
*/
int main() {
 /* Es recomendable al inicio declarar
 todas las variables que se van a utilizar
 en el programa */
 // variables enteras
 int enteroNumero;
 char caracterA = 65; // Convierte el entero a car�cter (ASCII)

 // Variable reales
 double puntoFlotanteNumero;

 // Asignar un valor del teclado a una variable
 printf("Escriba un valor entero: ");
 scanf("%d", &enteroNumero);
 printf("Escriba un valor real: ");
 scanf("%lf", &puntoFlotanteNumero);

 // Imprimir los valores con formato
 printf("\nImprimiendo las variables enteras:\a\n");
 printf("\tValor de enteroNumero = %i\n", enteroNumero);
 printf("\tValor de caracterA = %c\n", caracterA);
 printf("\tValor de puntoFlotanteNumero = %lf\n", puntoFlotanteNumero);

 printf("\nValor de enteroNumero en base 16 = %x\a\n", enteroNumero);
 printf("\tValor de caracterA en c�digo hexadecimal = %i\n", enteroNumero);
 printf("\tValor de puntoFlotanteNumero en notaci�n cient�fica = %e\n",
 puntoFlotanteNumero);
 // La funci�n getchar() espera un car�cter para continuar la ejecuci�n
 getchar();
 return 0;
}
