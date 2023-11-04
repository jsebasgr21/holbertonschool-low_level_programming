#include "main.h"
/**
 */
void print_line(int n)
{
	int e;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < n; e++)
	{
		_putchar('_');
	}
	}
}
