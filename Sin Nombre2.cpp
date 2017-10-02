#include <stdio.h>
/*
 Este programa muestra la manera en la que se declaran y asignan
 las variables est�ticas y las constantes.
*/
int main() {
 const int constante = 25;
 static char a = 'a';

 printf("Valor constante: %i\n", constante);
 printf("Valor est�tico: %c\n", a);

 // El valor de la variable declarada como constante no puede cambiar.
 // La siguiente l�nea genera un error al compilar si se quita el
comentario:
 // constante = 30;
 // las variables est�ticas s� pueden cambiar de valor
 a = 'b';
 printf("\nValor est�tico: %c\n", a);

 return 0;
}
