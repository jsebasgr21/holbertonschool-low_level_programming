#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: return rt
 */
char *create_array(unsigned int size, char c)
{
	char *rt;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	rt = malloc(sizeof(char) * size);
	if (rt == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		rt[i] = c;
	}
	return (rt);
}
