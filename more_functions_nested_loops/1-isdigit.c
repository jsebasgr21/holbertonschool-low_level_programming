#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: el numero a checkear
 * Return: 1 si es digito y 0 si no es digito
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
