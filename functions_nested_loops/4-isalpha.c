#include "main.h"
/**
 * _isalpha - detecta si el caracter es alphanumerico
 * @c: si c es alphanumerico lower o uppercase
 * Return: 1 si es letra y 0 si no es letra
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
