#include "main.h"
/**
 * print_sign - imprime el signo del numero sea positivo, negativo o igual a 0
 * @n: el numero a identificar si es igual, mayor o menor a 0
 * Return: 1 si es positivo, 0 si es 0, -1 si es menor a 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (1);
	}
}
