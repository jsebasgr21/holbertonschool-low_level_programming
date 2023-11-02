#include "main.h"
/**
 * print_alphabet_x10 - imprime el alphabet diez veces
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int abc;

	for (i = 0; i < 10; i++)
	{
	for (abc = 'a'; abc <= 'z'; abc++)
	{
	_putchar(abc);
	}
	_putchar('\n');
	}
}
