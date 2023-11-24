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
int name2 = strlen(name);
int owner2 = strlen(owner);

if (newdog == NULL){
return (NULL);
}

newdog->name = malloc(sizeof(char) * (name2 + 1));

if (newdog->name == NULL){
free (newdog);
return (NULL);
}

newdog->owner = malloc(sizeof(char) * (owner2 + 1));

if (newdog->owner == NULL){
free (newdog->name);
free (newdog);
return (NULL);
}

newdog->age = age;

strcpy(newdog->name, name);
strcpy(newdog->owner, owner);

return (newdog);
}
