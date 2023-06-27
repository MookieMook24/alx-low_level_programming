#include "main.h"

/**
* puts_half - A function that prints half of a string
* n = (length_of_the_string - 1) / 2, if odd
* @str: input
* Return: half of input
*/

void puts_half(char *str)

{

	int x, n, longb;

	longb = 0;

	for (x = 0; str[x] != '\0'; x++)
		longb++;
		n = (longb / 2);

	if ((longb % 2) == 1)
		n = ((longb + 1) / 2);

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);

	_putchar('\n');

}



