#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 * Return: return the duplicated string in the new memory space
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}
