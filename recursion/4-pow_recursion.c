#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: el valor a ser elevado
 * @y: la potencia de x
 * Return: el valor de x elevado a la potencia de y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
