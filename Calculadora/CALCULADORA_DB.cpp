//operaciones basicas
#include "stdio.h"

int main()
{
    int x,y,z,a,b;
    float c;
	printf("primero ingrese dos valores enteros\n");
    printf("ingrese el primer valor: ");
    scanf("%d",&x);
    printf("ingrese el segundo valor: ");
    scanf("%d",&y);
    printf("ahora se imprimiran los resultados de realizar las operaciones basicas entre los valores ingresados\n");
    z = x + y;
    a = x - y;
    b = x * y;
    c = x / y;
    printf("la suma entre %d y %d es >>%d<<\n",x,y,z);
    printf("la resta entre %d y %d es >>%d<<\n",x,y,a);
    printf("la multiplicación entre %d y %d es >>%d<<\n",x,y,b);
    printf("la division entre %d y %d es >>%f<<\n",x,y,c);
	return 0;
}