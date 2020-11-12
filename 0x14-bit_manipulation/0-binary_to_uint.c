#include "holberton.h"

/**
 * binary_to_uint - FFUnción que convierte..
 *
 *@b: String recibida
 * Return: Se devuelve resultado
 */
unsigned int binary_to_uint(const char *b)
{
	int resultado = 0, contador = 0, pow = 1;

	if (!b)
		return (0);

	while (b[contador])
		ccontador++;
	contador--;
	while (contador >= 0)
	{
		if (b[contador] != '1' && b[contador] != '0')
			return (0);

		resultado += (b[contador] - 48) * pow;
		pow *= 2;
		contador--;
	}
	return (result);
}

