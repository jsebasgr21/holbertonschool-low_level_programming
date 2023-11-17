#include "main.h"
/**
 * prime - verifica si es par o no es par
 * @a: entero a revisar
 * @b: divisor a revisar si a es divisible
 * Return: retorna 1 si es primo y 0 si no lo es
 */
int prime(int a, int b)
{
	if (b == a)
	{
		return (1);
	}

	if (a % b == 0)
	{
		return (0);
	}
	return (prime(a, b + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: el numero a revisar si es primo o no
 * Return: retorna 1 si es primo y 0 si no lo es
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
