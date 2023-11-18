#include "main.h"
#include <string.h>
/**
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

	con = malloc(strlen(s1)+strlen(s2)+1);

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
