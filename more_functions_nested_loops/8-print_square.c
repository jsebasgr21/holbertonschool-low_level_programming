#include "main.h"
/**
 * print_diagonal - imprime back slash en la terminal
 * @n: es la cantidad de veces que imprimira el back slash
 */
void print_square(int size)
{
	int e;
	int s;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e <= size; e++)
	{
	for (s = 0; s < size; s++)
	{
		_putchar('#');
	}
		_putchar('#');
		_putchar('\n');
	}
	}
}
