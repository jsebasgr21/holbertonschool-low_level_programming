#include "main.h"
/**
 * print_diagonal - imprime back slash en la terminal
 * @n: es la cantidad de veces que imprimira el back slash
 */
void print_diagonal(int n)
{
	int e;
	int s;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < n; e++)
	{
	for (s = 0; s < e; s++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
