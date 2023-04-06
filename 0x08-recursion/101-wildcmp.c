#include "main.h"

/**
* wildcmp - check if two strings are identical, with support for '*'
* @s1: string_1 address
* @s2: string_2 address
*
* Return: 1 when the strings are identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
}

return (0);
}

