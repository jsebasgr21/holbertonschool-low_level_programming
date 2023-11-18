#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: return the concatenation of the 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	con = malloc(strlen(s1) + strlen(s2) + 1);

	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	con[0] = '\0';
	strcat(con, s1);
	strcat(con, s2);
	return (con);
}
