#include <stdio.h>
#include <stdlib.h>
/**
* main - prints opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

char *func_ptr = (char *) main;
int i;
for (i = 0; i < num_bytes; i++)
{
if (i == num_bytes - 1)
{
printf("%02hhx\n", *(func_ptr + i));
}
else
{
printf("%02hhx ", *(func_ptr + i));
}
}

return (0);
}
