#include <stdlib.h>
#include "dog.h"
/**
* init_dog - Initializes a struct dog object
* @d: A pointer to the struct dog object to initialize
* @name: A string containing the name of the dog
* @age: A float containing the age of the dog
* @owner: A string containing the name of the dog's owner
* Description: initialize the field of a struct dog object
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
