#include <stdio.h>
int main(int argc, char** argv) 
{
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    num1 = 10;
    num2 = 20;

    *ptr1 = 30;
    *ptr2 = 40;

    *ptr2 = *ptr1;

	printf("EL valor de ptr1 es: %d El valor de ptr2 es: %d\n", *ptr2, *ptr1);
	printf("La dirección de ptr1 es: %d La dirección de ptr2 es: %d\n", ptr2, ptr1);

	printf("El numero de argumentos es %d\n", argc);
	printf("El numero de argumentos es %c\n", **argv);

    return 0;
}
