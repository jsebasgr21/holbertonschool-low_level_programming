#include "main.h"
/**
 */
void print_rev(char *s)
{
	int largo = 0;
	int i;

	while (s[i++])
		largo++;
	for (i = largo - 1; i >= '0'; i--)
		_putchar(s[i]);
}
