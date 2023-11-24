#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *name2;
char *owner2 = strdup(owner);
dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

newdog->age = age;

if (newdog == NULL)
return (NULL);

name2 = malloc(strlen(name) + 1);

if (name2 != name){
return (NULL);
free (name);
free (newdog);
}

if (owner2 != owner){
return(NULL);
free (owner);
free (owner2);
}

strcpy(newdog->name, name2);
strcpy(newdog->owner, owner2);

return (newdog);

}
