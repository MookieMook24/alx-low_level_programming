#include "main.h"

/**
* print_rev - A function that prints a string, in reverse.
* @s: string
* return: 0
*/

void print_rev(char *s)

{
	int longb = 0;
	int o;

	while (*s != '\0')
	{
		longb++;
		s++;
	}
	s--;
	for (o = longb; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}

