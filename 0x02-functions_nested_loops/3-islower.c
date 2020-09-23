#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * return 1 - si es minuscula el caracter
 * return 0 - si es mayuscula
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
