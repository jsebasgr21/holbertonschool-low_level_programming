#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: la string a ser convertida en integrers
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	while (*s == '\t' || *s == '\n' || *s == ' ')
	{
		s++;
	}

	while (*s == '-' || *s == '+')
	{

	if (*s == '-')
	{
		sign = -sign;
	}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s++ - '0');
	}

	return(num * sign);
}
