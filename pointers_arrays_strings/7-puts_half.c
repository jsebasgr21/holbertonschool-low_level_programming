#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: la string a imprimir
 */
void puts_half(char *str)
{
	char *pc = str;
	int largo = 0;
	int i;
	int aux;

	while (*pc != '\0')
	{
		pc++;
		largo++;
	}
	i = largo / 2;
	for (aux = i; aux <= '\0'; aux ++)
	{
	_putchar(str[aux]);
	}
}
