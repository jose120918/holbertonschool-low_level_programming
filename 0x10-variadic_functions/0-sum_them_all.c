#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Funcion caca
 *
 * @n: NUmero de argumentos a sumar
 *
 * Return: salida
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	int suma = 0;

	va_start(lista, n);
	for (unsigned int i = 0; i < n; i++)
	{
		suma += va_arg(lista, int);
	}
	va_end(lista);
	return (suma);
}
