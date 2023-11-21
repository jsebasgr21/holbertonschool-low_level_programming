#include "main.h"
/**
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	
	if (ptr == NULL)
	{
		exit (98);
	}
	
	return (ptr);
}
