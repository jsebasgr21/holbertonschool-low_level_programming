#include "main.h"
/**
 * swap_int - cambia los valores de dos integrers
 * @a: valor de a en main
 * @b: valor de b en main
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
