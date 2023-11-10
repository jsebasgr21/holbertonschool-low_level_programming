#include "main.h"
/**
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[j] < n; i++, j++)
	{
		src[i] = dest[j];
	}
	return (dest);
}
