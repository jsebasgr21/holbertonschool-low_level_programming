#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Write a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: newdog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

if (newdog == NULL){
return (NULL);
}

newdog->name = strdup(name);

newdog->age = age;

newdog->owner = strdup(owner);

if (newdog->name == NULL || newdog->owner == NULL){
free (newdog->name);
free (newdog->owner);
free (newdog);
return (NULL);
}

return (newdog);
}
