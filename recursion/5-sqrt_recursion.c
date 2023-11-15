#include "main.h"
/**
 * _sqrt - calcula si m es raiz de n
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
/**
 * _sqrt_recursion - calcula si m es raiz de n
 *
 * @n: el numero a buscar la raiz cuadrada
 * Return: retorna la raiz cuadrada de n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
