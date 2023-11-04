#include "main.h"
/**
 * print_triangle - imprime un triangulo
 * @size: el tamaño del triangulo
 */
void print_triangle(int size)
{
	int e;
	int z;
	int a;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < size; e++)
	{
	for (z = size - e; z > 1; z--)
	{
		_putchar(' ');
	}
	for (a = 0; a <= e; a++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
}
