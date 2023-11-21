#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int
 * Return: return the pointer with the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
