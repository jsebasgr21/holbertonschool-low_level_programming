#include "main.h"
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: la array con los valores a imprimir
 * @n: el numero de valores a imprimir de la array
 */
void print_array(int *a, int n)
{
	int var = 0;

	while (var < (n - 1))
	{
		var++;
		printf("%d, ", a[var]);
	}
	if (var == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
