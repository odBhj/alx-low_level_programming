#include "main.h"

/**
* strlength_recursion - Returns the length of a string.
* @s: string to be evaluated.
*
* Return: length of the string
*/
int strlength_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (strlength_recursion(s + 1) + 1);
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: string to evaluate
*
* Return: 1 if string is palindrome 0 if nott
*/
int is_palindrome(char *s)
{
int len = strlength_recursion(s);

if (len <= 1)
return (1);

if (*s == *(s + len - 1))
return (is_palindrome(s + 1) && is_palindrome(s + len - 2));

return (0);
}

