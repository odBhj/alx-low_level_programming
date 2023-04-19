#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 *@f: how to print the name
 * Return: Null
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
{
return;
}
f(name);
}
