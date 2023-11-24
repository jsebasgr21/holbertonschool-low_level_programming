#include <stdio.h>
#include "dog.h"
/**
 * 
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
