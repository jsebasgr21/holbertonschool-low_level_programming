#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to
 * @dest: donde se va a copiar lo que haya en src
 * @src: lo que va a ser copiado en dest
 * Return: retorna lo que haya en dest
 */
char *_strcpy(char *dest, char *src)
{
	int aux;

	for (aux = 0; src[aux] != '\0'; aux++)
	{
		dest[aux] = src[aux];
	}
	dest[aux++] = '\0';
	return (dest);
}
