#include "main.h"
/**
 * _memset -  a function that fills a memory with a constant byte
 * @s: starting address of memory to be filled
 * @b:  constant byte that will be used to fill memory
 * @n: number of bytes that will to be filled with contant b 
 *
 * Return: s
 */
char * _memset(char *s, char b, unsigned int n)
{
	int i; 
	for (i = 0; n > 0; i++);
	{
		s[i] = b;
		n--;
	}
	return (s);


}
