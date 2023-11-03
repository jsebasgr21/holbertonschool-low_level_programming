#include "main.h"
/**
 * times_table - imprime la tabla del 9
 */
void times_table(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i);
	_putchar(',');
	_putchar(' ');

	for (n = 1; n <= 9; n++)
	{
	_putchar(i * n);
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
