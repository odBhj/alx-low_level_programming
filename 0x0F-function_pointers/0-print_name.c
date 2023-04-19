#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 *@f: how to print the name
 * Return: Null if error, char is success.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
