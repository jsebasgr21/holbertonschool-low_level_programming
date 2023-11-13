#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: th string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else 
	_putchar("%c", s[i]);
	i++;
	_putchar('\n');

}
