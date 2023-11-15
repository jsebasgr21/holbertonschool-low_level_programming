#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _sqrt - busca si m es mayor o igual a n para buscar raiz de n
 * @m: el numero a multiplicar para buscar la raiz de n
 * @n: el numero a buscar la raiz cuadrada
 * Return: retorna la raiz cuadrada de n
 */
int _sqrt(int m, int n)
{
	if (m * m > n)
	{
	return (-1);
	}
	if (m * m == n)
	{
	return (m);
	}
	return (_sqrt(m + 1, n));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
