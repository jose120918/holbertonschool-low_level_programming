#include "holberton.h"

/*
* reset_to_98 - Funcion void solicitada
* @n - Variablle de tipo entera entregada por main
*/

void reset_to_98(int *n)
{
	int y = *n;
	y = 98;
	*n = y;
}
