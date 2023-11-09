#include "main.h"
/**
 * puts2 -  prints very other character of a string,
 * @str: - la string a imprimir
 */
void puts2(char *str)
{
	int largo = 0;
	int i = 0;
	char *pc = str;
	int o;

	while (*pc != '\0')
	{
	pc++;
	largo++;
	}

	i = largo - 1;

	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
