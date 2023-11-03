#include "main.h"
/**
 * times_table - imprime la tabla del 9
 */
void times_table(void)
{
	int i, n, result;

	for (i = 0; i <= 9; i++)
	{
	for (n = 0; n <= 9; n++)
	{
	result = i * n;
	if (result < 10)
	{
	_putchar('0');
	_putchar('0' + result);
	}
	else
	{
	_putchar('0' + result / 10);
	_putchar('0' + result % 10);
	}

	if (n < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
