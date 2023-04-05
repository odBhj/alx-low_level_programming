#include "main.h"

/**
 * _puts_recursion - Recursively prints each character in a string
 *
 * Prints characters until null terminator is reached, then prints a newline.
 *
 * @param s: The string to be printed
 *
 * @Author: Mohammed Bahaj
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

