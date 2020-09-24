#include "holberton.h"

/**
 * _isupper - checks for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if c is uppercase
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else if (c >= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
