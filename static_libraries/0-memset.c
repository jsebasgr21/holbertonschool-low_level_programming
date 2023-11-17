#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: variable puntero tipo char
 * @b: variable tipo char
 * @n: numero de bytes a introducir
 * Return: retorna el puntero s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
