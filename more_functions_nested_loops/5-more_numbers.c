#include "main.h"
/**
 * more_numbers - imprime los numeros del 0 al 14 diez veces
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
	for (n = 0; n <= 14; n++)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
