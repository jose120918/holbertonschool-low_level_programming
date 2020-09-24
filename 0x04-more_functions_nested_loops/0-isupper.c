#include "holberton.h"

/**
 * _isupper - checks for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c <= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
