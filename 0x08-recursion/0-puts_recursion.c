#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 *
 * Recursively prints the characters in the input string until the null terminator
 * character is reached, and then prints a newline character.
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

