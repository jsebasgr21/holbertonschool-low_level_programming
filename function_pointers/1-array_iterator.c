#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action: pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
{
action(array[i]);
}

}
