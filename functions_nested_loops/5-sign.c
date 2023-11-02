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
	putchar('+');
	putchar('\n');
	return (1);
	}
	else if (n == 0)
	{
	putchar('0');
	putchar('\n');
	return (0);
	}
	else
	{
	putchar('-');
	putchar('\n');
	return (-1);
	}
}
