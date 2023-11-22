#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array of elements
 * @size: the size of bytes
 * Return: return the pointer to the alocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr = 0;
    unsigned int i = 0;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    for (i = 0; i <= nmemb * size; i++)
        ptr[i] = 0;

    if (ptr == 0)
        {return(0); }

        free (ptr);

    return (ptr);
}