#include "main.h"
/**
 * print_diagonal - imprime back slash en la terminal
 * @n: es la cantidad de veces que imprimira el back slash
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ( i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		if ( i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i );
		}
	}
	return (0);
}
