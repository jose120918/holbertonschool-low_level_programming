#include "variadic_functions.h"

/**
 * sum_them_all - Funcion caca
 *
 * @n: Numero de argumentos a sumar
 *
 * Return: salida
*/

int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int i;
	va_list lista;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		suma += va_arg(lista, int);
	}
	va_end(lista);
	return (suma);
}
