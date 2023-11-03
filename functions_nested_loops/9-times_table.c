#include "main.h"
/**
 * times_table - imprime la tabla del 9
 */
void times_table(void)
{
	int i = 0;
	int n = 1;

	for (i = 0; i <= 10; i++)
	{
	_putchar(i);
	_putchar(',');
	_putchar(' ');
	}
	for (n = 1; n <= 9; n++)
	{
	_putchar(n * 9);
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
}

