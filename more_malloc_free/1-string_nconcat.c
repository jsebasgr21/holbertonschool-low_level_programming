#include "main.h"
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	char *ps1 = 0;
	char *ps2 = 0;

	if (s1 == NULL)
	{
		s1 = ("");
	}

	if (s2 == NULL)
	{
		s2 = ("");
	}

	while (s1[j] <= '\0')
	{
		j++;
		*ps1 = s1[j];
	}

	for (i = 0; i <= n; i++)
	{
		*ps2 = s2[i];
	}

	ptr = malloc(sizeof(ps1) + sizeof(ps2) * n);
	
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcat(ptr, s1);
	strcat(ptr, ps2);


	return (ptr);
}
