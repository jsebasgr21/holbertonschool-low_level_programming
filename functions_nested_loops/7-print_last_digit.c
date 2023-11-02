#include "main.h"
/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @n: el numero al que se le imprimira el ultimo numero
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
