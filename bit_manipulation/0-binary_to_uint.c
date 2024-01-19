#include "main.h"
/**
 * main - converts a binary number to an unsigned int
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{

int convertedNum = 0;

if (b == NULL)
{
return (0);
}

if (b != '0' || b != '1')
{
return (0);
}
else
{
convertedNum = (convertedNum << 1) | (*b - '0');
}
return (convertedNum);
}
