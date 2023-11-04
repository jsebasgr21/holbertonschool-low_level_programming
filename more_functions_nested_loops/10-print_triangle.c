#include "main.h"
/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @n: el numero al que se le imprimira el ultimo numero
 * Return: last_digit retorna el ultimo digito
 */
void print_triangle(int size)
{
	int e;
	int s;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < -size; e++)
	{
	for (s = 0; s < e; s++)
	{
		_putchar('#');
	}
		_putchar('#');
		_putchar('\n');
	}
	}
}
