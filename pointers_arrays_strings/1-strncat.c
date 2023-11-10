#include "main.h"
/**
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
		

