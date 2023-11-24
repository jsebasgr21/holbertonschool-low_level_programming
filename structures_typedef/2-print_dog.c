#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to variables
*/
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name))
printf("Name: (nil)\n");
else
printf("name : %s\n", d->name);

printf("Age : %f\n", d->age);

if (!(d->owner))
printf("Owner: (nil)\n");
else
printf("Owner : %s\n", d->owner);
}

}
