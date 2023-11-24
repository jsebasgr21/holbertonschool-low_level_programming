#include "main.h"
/**
 * array_range -  creates an array of integers.
 * @min: variable with integers
 * @max: variable with integers
 * Return: pointer with an array of integers
 */
int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
return (NULL);

ptr = malloc(sizeof(int) * (max - min + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
ptr[i] = min;

return (ptr);
}
