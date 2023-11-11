#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: variable con una string
 * @s2: variable con una string
 * Return: retorna 0 si el valor de s1 y s2 son iguales
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int y;

	y = strlen(s1);

	while (i < y)
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
		i++
	}
	return (0);
}
