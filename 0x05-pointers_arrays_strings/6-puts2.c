#include "main.h"

/**
* puts2 - A function that prints every other character of a string
* @str: input
* Return: print
*/

void puts2(char *str)

{

	int longb = 0;
	int f = 0;
	char *y = str;
	int g;

	while (*y != '\0')
	{
		y++;
		longb++;
	}
	f = longb - 1;
	for (g = 0 ; g <= f ; g++)
	{
		if (g % 2 == 0)
		{
			_putchar(str[g]);
		}
	}
	_putchar('\n');

}

