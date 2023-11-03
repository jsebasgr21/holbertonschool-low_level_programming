#include "main.h"
/**
 * times_table - imprime la tabla del 9
 */
void times_table(void)
{
	int i;
	int n;

	for (i = 48; i <= 57; i++)
	{
	_putchar(48);
	_putchar(',');
	_putchar(' ');

	for (n = 49; n <= 57; n++)
	{
	_putchar(i * n);
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
