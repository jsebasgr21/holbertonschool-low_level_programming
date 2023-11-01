#include <stdio.h>
/**
 * main - all numbers base 16 in lowercase
 *
 *
 *
 *
 * Return: Always 0 (Succes)
*/
int main(void)
{
	char seis;

	for (seis = '0'; seis <= 'f'; seis++)
	{
	if ((seis >= '0' && seis <= '9') || (seis >= 'a' && seis <= 'f'))
	{
	putchar(seis);
	}
	}
	putchar('\n');
	return (0);
}
