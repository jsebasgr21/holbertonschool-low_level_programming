#include "main.h"
/**
 * main - imprime del 1 al 100, si es multiplo de
 * 3 imprime fizz y si es multiplo de 5 imprime buzz
 * y si es multiplo de ambos imprime FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
