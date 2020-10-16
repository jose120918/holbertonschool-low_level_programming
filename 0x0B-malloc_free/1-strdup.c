#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - main function.
 * @str: Entero dado desde main.
 *
 * Description: Escriba una función que devuelva un puntero a
 * un espacio recién asignado en la memoria, que contiene
 * una copia de la cadena dada como parámetro.
 * Return: The pointer to str.
 */

char *_strdup(char *str)
{
	int size; /* Tamaño del string*/
	int i; /* Iterador del for a copiar */
	char *array; /* Salida */

	if (!str)
	{
		return (NULL); /* Devuelve NULL si str es nulo */
	}
	for (size = 0; str[size] != '\0'; size++) /* Calculamos leng del string */
		;
	array = malloc((size + 1) * sizeof(char)); /* New memory alloc */

	if (!array)
	{
		return (NULL); /* Devuelve NULLL si malloc falla */
	}
	for (i = 0; i < (size + 1); i++)
	{
		array[i] = str[i]; /* Copiamos string en base a string dado por main */
	}
	return (array); /* Devolvemos string nuevo */
}
