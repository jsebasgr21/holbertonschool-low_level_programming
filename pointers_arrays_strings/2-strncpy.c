#include "main.h"
/**
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; src[i] < n; i++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
