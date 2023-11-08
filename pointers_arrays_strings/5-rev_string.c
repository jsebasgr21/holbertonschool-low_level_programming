#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: la string a poner al revez
 * Return: retorna la string al revez
 */

void rev_string(char *s)
{
	/* la variale len sera el tamaño de la string
	 * la variable i sera la string a imprimir al revez
	 */
	int len = 0;
	int i = len -1;
	int aux = 0;
	
	/* recorremos s para sirtuarnos al final de la string*/
	while (s[len] != '\0')
	{
		len++;
	}

	for (; i < len; i++, len--)
	{
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
	}
}
