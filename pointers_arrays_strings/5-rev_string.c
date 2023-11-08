#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: la string a poner al revez
 * Return: retorna la string al revez
 */

void rev_string(char *s)
{
	int patras = 0;

	while (s[patras] != '\0')
	{
		patras++;
	}
	for (; s[patras] >= 0; patras--)
	{
		_putchar(s);
		_putchar('\n');
		_putchar(s[patras]);
	}
}
