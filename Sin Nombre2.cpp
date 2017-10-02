#include <stdio.h>
/*
 Este programa muestra la manera en la que se declaran y asignan
 las variables estáticas y las constantes.
*/
int main() {
 const int constante = 25;
 static char a = 'a';

 printf("Valor constante: %i\n", constante);
 printf("Valor estático: %c\n", a);

 // El valor de la variable declarada como constante no puede cambiar.
 // La siguiente línea genera un error al compilar si se quita el
comentario:
 // constante = 30;
 // las variables estáticas sí pueden cambiar de valor
 a = 'b';
 printf("\nValor estático: %c\n", a);

 return 0;
}
