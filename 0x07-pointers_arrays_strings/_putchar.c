#include "main.h"
#inlude <unistd.h>

/**
 *  _putchar - write the characters to stdout
 *  @c: the character to print
 *
 *  Return: on success 1
 *  on error, -1 is returned,and errno is set approriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
