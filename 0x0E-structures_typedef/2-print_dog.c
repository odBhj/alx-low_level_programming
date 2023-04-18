#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
char *name = d->name;
char *owner = d->owner;

if (d == NULL)
return;

if (name == NULL)
name = "(nil)";
if (owner == NULL)
owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
