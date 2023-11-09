#include "main.h"
/**
 */
char *_strcpy(char *dest, char *src)
{
	int aux;

	for (aux = 0; src[aux] != src[aux-1]; aux++)
	{
		dest[aux] = src[aux];
	}
	dest[aux++] = '\0';
	return (dest);
}
