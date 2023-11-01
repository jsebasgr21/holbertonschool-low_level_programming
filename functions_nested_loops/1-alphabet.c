#include "main.h"
/**
 * print_alphabet - imprime el alphabeto en lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
	putchar(abc);
	}
	putchar('\n');
}
