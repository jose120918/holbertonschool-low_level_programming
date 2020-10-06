#include "holberton.h"

/**
 * _strcat - main function.
 * @dest: Pointer with the address value.
 * @src: Pointer with the adress value.
 * Description: Write a function that concatenates two strings.
 *
 * Return: none.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, i = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
