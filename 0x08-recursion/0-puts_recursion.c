#include "main.h"

/**
 * _puts_recursion - Recursively prints each character in a string
 *
 * @s: The string to be printed
 *
 * Return:void (Always)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

