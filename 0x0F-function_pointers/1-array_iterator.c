#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator -  executes a function given as a parameter.
* @array: number
*@size: size of number
*@action: func to be used
* Return: Null
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
