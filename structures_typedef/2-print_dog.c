#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to variables
*/
void print_dog(struct dog *d)
{
if (d){}

if (!(d->name))
printf("Name: (nil)");
else
printf("name : %s\n", d->name);

if (!(d->owner))
printf("Owner: (nil)");
else
printf("Owner : %s\n", d->owner);

printf("Age : %f\n", d->age);

}
