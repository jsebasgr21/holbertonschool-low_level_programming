#ifndef INIT_DOG_C
#define INIT_DOG_C
/**
 * struct dog - initialize a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif