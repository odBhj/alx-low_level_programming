#include "main.h"

/**
 * factorial - Calculate the factorial of an integer
 * @n: The integer to calculate the factorial of
 *
 * Return: factorial of n, or -1
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = n * factorial(n - 1);
	}

	return (result);
}

