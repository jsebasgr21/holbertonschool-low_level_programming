#include "main.h"
/**
 */
char *_strcpy(char *dest, char *src)
{
	int aux = 0;

	while (src[aux] != src[aux-1])
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux] = '\0';
	return (dest);
}
