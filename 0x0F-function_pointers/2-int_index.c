#include <stdio.h>
#include "function_pointers.h"
/**
* int_index -  executes function given as a parameter on each element
* @array: array
*@size: number of elements in the array
*@cmp: pointer to the function to be used
* Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}

