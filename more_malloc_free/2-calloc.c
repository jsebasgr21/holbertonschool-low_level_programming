#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array of elements
 * @size: the size of bytes
 * Return: return the pointer to the alocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    char *ptr2;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return(NULL);

    ptr2 = ptr;

    for (i = 0; i <= nmemb * size; i++)
        ptr2[i] = 0;

    return (ptr);
}