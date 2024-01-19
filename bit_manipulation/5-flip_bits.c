#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorres = n ^ m;
unsigned int count = 0;

while (xorres > 0)
{
count += xorres & 1;
xorres >>= 1;
}
return (count);
}
