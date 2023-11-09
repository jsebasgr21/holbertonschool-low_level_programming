#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: la string a imprimir
 */
void puts_half(char *str)
{
	int largo = 0;
	int i = 0;
	int aux;

	while (str[i] != '\0')
	{
		i++;
		largo++;
	}

	aux = (largo / 2);

	if ((largo % 2) == 1)
	{
		aux = ((largo + 1) / 2);
	}
	for (i = aux; str[i] != '\0'; i ++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
