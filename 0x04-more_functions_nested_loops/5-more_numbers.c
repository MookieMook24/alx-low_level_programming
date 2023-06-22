#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)

{
	int j;
	int k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_puthar('1');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}

}
