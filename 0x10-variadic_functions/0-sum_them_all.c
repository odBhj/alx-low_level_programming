#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Calculates the sum of n integers passed as variable arguments.
* @n: The number of integers to sum.
* @...: The integers to sum.
* Return: The sum of the integers.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;

unsigned int j, val = 0;

va_start(ap, n);

for (j = 0; j < n; j++)
val += va_arg(ap, int);
va_end(ap);
return (val);
}
