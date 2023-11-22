#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bites
 * Return: return the pointer ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s11 = 0, s22 = 0, i, j;

	if (s1 == NULL)
		{s1 = ("");}

	if (s2 == NULL)
		{s2 = ("");}

	for (; s1[s11] != '\0'; s11++)

	while (s2[s22] != '\0')
		{s22++;}
	if (n >= s22)
		{n = s22;}
	ptr = malloc((s11 + n + 1) * 1);

	if (ptr == 0)
		{return (0);}

	for (i = 0; i < s11; i++)
		{ptr[i] = s1[i];}

	for (j = 0; j < n; j++)
		{ptr[i + j] = s2[j];}

	ptr[i + j] = '\0';
	return (ptr);
}
