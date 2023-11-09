#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: la string a poner al revez
 * Return: retorna la string al revez
 */

void rev_string(char *s)
{
/* la variale len sera el tamaño de la string la variable*/

	int len = 0;
	int i, j;
	int aux;

	/* recorremos s para sirtuarnos al final de la string*/
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
}
