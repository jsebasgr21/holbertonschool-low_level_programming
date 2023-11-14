#include "main.h"
/**
 * _print_rev_recursion - print a reverse string
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
