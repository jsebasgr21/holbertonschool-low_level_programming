#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - ultimo digito y parametro
 *
 * toma el ultimo digito de la string y define
 * si es mayor a 5 o igual a 0 o menor a 6 pero
 * no igual a 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("is %d ", n);

	if (n > 5)
	{
	printf("and is greater than 5");
	}
	else if (n == 0)
	{
	printf("and is 0");
	}
	else if (n < 6 && n != 0)
	{
	printf("and is less than 6 and not 0");
	}
	else
	{
	printf("error");
	}
	printf("\n");
	return (0);
}
