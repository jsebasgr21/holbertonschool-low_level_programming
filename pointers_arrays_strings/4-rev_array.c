#include "main.h"
/**
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int ad[99];
	
	while (i < n)
    {
        ad[i] = a[i];
	i++;
    }
	for (i = i - 1; i >= 0; i--, j++)
	{
		a[j] = ad[i];
	}
}
