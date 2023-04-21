#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *str;
const char type_list[] = "cifs";

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
j = 0;

while (type_list[j] != '\0')
{
if (format[i] == type_list[j])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}

if (format[i + 1] != '\0' && type_list[j] != 's')
printf(", ");
break;
}
j++;
}
i++;
}

va_end(args);

printf("\n");
}

