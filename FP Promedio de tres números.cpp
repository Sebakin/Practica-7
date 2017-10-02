#include<stdio.h>
#include<conio.h>

int main()
{

int N1, N2, N3, PROMEDIO;    
    
printf("Deme un numero: ");
scanf("%d", &N1);
printf("Deme otro numero: ");
scanf("%d", &N2);
printf("Dame un  ultimo numero: ");
scanf("%d", &N3);
PROMEDIO = (N1 + N2 + N3)/3;
printf("El promedio de los numeros es %d", PROMEDIO);

return 0;

}
