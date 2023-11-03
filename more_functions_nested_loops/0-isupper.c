#include "main.h"
/**
 * _isupper - detecta si una letra esta o no esta en lower case
 * @c: caracteres a ser chequeados
 * Return: si es 1 es lower si es 0 no es lower.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	return (1);
	}
	else
	{
	return (0);
	}
}
