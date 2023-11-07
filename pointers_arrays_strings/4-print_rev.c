#include "main.h"
/**
 */
void print_rev(char *s)
{
	int y = *s;	

	while (y > 0)
		_putchar(y--);
}
