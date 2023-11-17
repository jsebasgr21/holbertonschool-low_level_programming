#include "main.h"
/**
 * _islower - detecta si una letra esta o no esta en lower case
 * @c: caracteres a ser chequeados
 * Return: si es 1 es lower si es 0 no es lower.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
