#include "main.h"
/**
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i < 0)
		{
		printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
}
