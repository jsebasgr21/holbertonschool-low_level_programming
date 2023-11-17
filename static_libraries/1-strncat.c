#include "main.h"
/**
 * _strncat - concatena dos strings
 * @dest: variable puntero
 * @src: variable puntero
 * @n: el numero de caracteres a concatenar de una string a otra
 * Return: retorna el nuevo valor de dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[j] != '\0' && j < n; i++, j++)
	{
		if (j > n)
		{
			break;
		}
		dest[i] = src[j];
	}
	return (dest);
}
