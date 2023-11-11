#include "holberton.h"

/**
 * string_toupper - Cambia las lowercase a uppercase
 *
 * @str: la string a ser modificada.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
