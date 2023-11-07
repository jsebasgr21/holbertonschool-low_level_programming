#include "main.h"
/**
 */
void print_rev(char *s)
{
	int y = *s;	

	for (; y >= 0; y--)
	{
		_putchar(y);
	}
}
