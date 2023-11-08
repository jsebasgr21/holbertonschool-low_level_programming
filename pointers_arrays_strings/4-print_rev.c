#include "main.h"
/**
 */
void print_rev(char *s)
{
	int largo = 0, i;

	while (s[i++])
	{
		largo++;
	}

	for (i = largo - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
