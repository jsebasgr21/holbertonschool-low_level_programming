#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: array to use
 * @size: tamaño de la diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}
