#include <stdio.h>
/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *file = __FILE__;

	printf("%s\n", file);
	return (0);
}
