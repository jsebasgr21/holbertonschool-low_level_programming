#include "main.h"
#include <string.h>
/**
 */
char *_strdup(char *str)
{
	int len;
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

	return (0);
}
