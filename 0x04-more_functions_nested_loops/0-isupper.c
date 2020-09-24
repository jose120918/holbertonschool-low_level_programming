#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if c is lowercase
 */
int _isupper(int c)
{
	if (c <= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
