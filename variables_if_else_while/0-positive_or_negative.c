#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - numero al azar negativo o positivo
 *
 *
 * genera un numero al azar e imprime si ese numero
 * es negativo o positivo
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
	printf("is positive");
	}
	else if (n == 0)
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}

	printf("\n");
	return (0);
}
