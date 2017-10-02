#include <stdio.h>

main()
{
	int a, b, c;
	
	printf( "Introduzca primer numero (entero): " );
	scanf( "%d", &a );
	printf( "Introduzca segundo numero (entero): " );
	scanf( "%d", &b );
	
	c = a + b;
	printf("El resultado de la suma es: %d",c);
	
	return 0;
}
