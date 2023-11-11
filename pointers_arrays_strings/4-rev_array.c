#include "main.h"
/**
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int *ad = a;

	while (ad[i] != '\0')
	{
		i++;
	}
	while (ad[i] >= n)
	{
		i--;
		a[i] = ad[i];
	}
}
