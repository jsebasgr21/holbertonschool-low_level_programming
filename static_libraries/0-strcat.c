#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: la variable puntero tipo char
 * @src: variable puntero de tipo char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	for (; src[s] != '\0'; s++, d++)
	{
		dest[d] = src[s];
	}
	dest[d] = '\0';
	return (dest);
}
