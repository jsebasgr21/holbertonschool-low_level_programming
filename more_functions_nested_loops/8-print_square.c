#include "main.h"
/**
 * print_diagonal - imprime back slash en la terminal
 * @n: es la cantidad de veces que imprimira el back slash
 */
void print_square(int size)
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
	for (s = 0; s < n; s++)
	{
		_putchar('#');
	}
		_putchar('#');
		_putchar('\n');
	}
	}
}
