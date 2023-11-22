#include "main.h"
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s11 = strlen(s1);
	unsigned int s22 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = ("");
	}

	if (s2 == NULL)
	{
		s2 = ("");
	}

	while (s1[s11] != '\0')
	{
		s11++;
	}

	while (s2[s22] != '\0')
	{
		s22++;
	}

	if (n >= s22)
	{
		n = s22;
	}

	ptr = malloc((s11 + n + 1) * sizeof(char));
	
	if (ptr == 0)
	{
		return (0);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}