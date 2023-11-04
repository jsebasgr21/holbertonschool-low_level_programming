#include "main.h"
/**
 * print_line - imprime _ la cantidad de veces que sea n
 * @n: es la cantidad de veces que imprimira el _
 */
void print_line(int n)
{
	int e;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < n; e++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
