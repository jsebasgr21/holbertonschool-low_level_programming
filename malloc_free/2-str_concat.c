#include "main.h"
#include <string.h>
/**
 */
char *str_concat(char *s1, char *s2)
{
	char *con = malloc(strlen(s1)+strlen(s2)+1);

	con[0] = '\0';
	strcat(con, s1);
	strcat(con, s2);
	return (con);
}
