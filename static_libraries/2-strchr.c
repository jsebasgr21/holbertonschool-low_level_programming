#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: puntero de la string
 * @c: el character a identificar
 * Return: retorna la primera coincidencia o retrona NULL si no se encuentra
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
