#include "main.h"
/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of
 * integrers
 * @width: la variable del ancho de mi array
 * @height: la variable del alto de mi array
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	alloc = malloc(sizeof(int *) * height);

	if (alloc == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
			free(alloc[j]);
			}
		free(alloc);
		return (NULL);
		}
	for (j = 0; j < width; j++)
	{
		alloc[i][j] = 0;
	}
	}

	return (alloc);
}
