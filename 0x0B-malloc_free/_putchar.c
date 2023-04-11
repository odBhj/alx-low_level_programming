#include "main.h"
		
#include <unistd.h>
		
/**
		
 * _putchar - stdout
		
 * @c: printed character
		
 *
		
 * Return:  1 (if success)
		
 * -1 (On error)
		
 */
		
int _putchar(char c)
		
{
		
	return (write(1, &c, 1));
		
}
