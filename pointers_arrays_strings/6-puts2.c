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

/**
 * while - mientras *pc sea diferente a \0 entonces pc++ y la variable
 * largo++ tambien aumenten en 1, esto hace que pc y la variable
 * largo esten al final de la string
 * @'\0': caracter nulo
 */
	while (*pc != '\0')
	{
	pc++;
	largo++;
	}
/**
 * i = largo - 1 - significa que i se posiciona un caracter antes
 * del caracter \0
 */
	i = largo - 1;
/**
 * la variable o mientras sea menor o igual a la varible i
 * que se encuentra un caracter antes de \0 va a aumentar en
 * uno su valor
 */
	for (o = 0; o <= i; o++)
	{
/**
 * si modulo 2 de o, osea que si o es divisible por 2, entonces
 * putchar el valor de la posicion en donde se encuentra o
 * de lo contrario pasa al siguiente pero sin imprimirlo
 */		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
