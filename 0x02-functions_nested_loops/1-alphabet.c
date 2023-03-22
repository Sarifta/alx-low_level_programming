#include "main.h"

/**
 * print_alphabet -  print lowercase alphabet a-z
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
