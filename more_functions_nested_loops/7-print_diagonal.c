#include "main.h"
/**
 * print_line - imprime _ la cantidad de veces que sea n
 * @n: es la cantidad de veces que imprimira el _
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
		for (s = 1; s < n; s++)
				{
				_putchar(' ');
				}
		_putchar('\\');
	}
	_putchar('\n');
	}
}
