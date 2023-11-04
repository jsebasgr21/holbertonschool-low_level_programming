#include "main.h"
/**
 * print_square - imprime un cuadrado sizexsize
 * @size: es la cantidad de veces que imprimira el # formando un cuadro
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
	for (e = 0; e < size; e++)
	{
	for (s = 1; s < size; s++)
	{
		_putchar('#');
	}
		_putchar('#');
		_putchar('\n');
	}
	}
}
