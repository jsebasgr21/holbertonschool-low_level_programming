#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{

unsigned int convertedNum = 0;

if (b == NULL)
{
return (0);
}

for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
{
return (0);
}
else
{
convertedNum = (convertedNum << 1) | (*b - '0');
}
}
return (convertedNum);
}
