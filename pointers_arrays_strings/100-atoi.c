#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: la string a ser convertida en integrers
 * Return: retorna el numero positivo o negativo dependiendo
 * del signo que contenga sign
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	unsigned int n = 0;

	for (; s[num] != '\0'; num++)
	{
		if (s[num] == '-')
		{
			sign = (sign * -1);
		}
		else if (s[num] >= '0' && s[num] <= '9')
		{
			break;
		}
	}

	for (; s[num] >= '0' && s[num] <= '9'; num++)
	{
		n = (n * 10) + (s[num] - '0');
	}

	return (n * sign);
}
