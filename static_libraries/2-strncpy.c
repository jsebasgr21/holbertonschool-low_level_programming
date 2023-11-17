#include "main.h"
/**
 * _strncpy - copia una string en otra variable
 * @dest: variable puntero de tipo char
 * @src: variable puntero de tipo char
 * @n: el numero de caraceres a copiar de una variable a otra
 * Return: retorna el valor de la variable auxiliar tmp
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (tmp);
}
