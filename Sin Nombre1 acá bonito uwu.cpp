#include <stdio.h>
/*
 Este programa muestra la manera en la que se declaran y asignan variables
 de diferentes tipos: numéricas (enteras y reales) y caracteres, así como
 la manera en la que se imprimen los diferentes tipos de datos.
*/
int main() {
 /* Es recomendable al inicio declarar
 todas las variables que se van a utilizar
 en el programa */
 // variables enteras
 int enteroNumero;
 char caracterA = 65; // Convierte el entero a carácter (ASCII)

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
 printf("\tValor de caracterA en código hexadecimal = %i\n", enteroNumero);
 printf("\tValor de puntoFlotanteNumero en notación científica = %e\n",
 puntoFlotanteNumero);
 // La función getchar() espera un carácter para continuar la ejecución
 getchar();
 return 0;
}
