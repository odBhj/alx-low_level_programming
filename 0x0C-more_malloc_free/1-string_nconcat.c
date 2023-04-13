#include <stdlib.h>		
#include "main.h"		
/**		
 * *string_nconcat - concatenates two strings s1 and v2
 * @v1: string
 * @v2: string
 * @n: number of bytes from v2 to concatenate to v1		
 * Return: pointer to the resulting string	
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
unsigned int len1 = 0, len2 = 0, i, j;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
{
n = len2;
}
result = malloc((len1 + n + 1) * sizeof(char));
if (result == NULL)
{
return NULL;
}
for (i = 0; s1[i]; i++)
result[i] = s1[i];
for (j = 0; j < n; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return result;
}
