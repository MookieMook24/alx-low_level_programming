#include "main.h"
#include <stdio.h>

/**
 * _memset - fill a block of memory with a specific value
 * @x: Starting address of memory to be filled
 * @y: The desired value
 * @z: Number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *x, char y, unsigned int z)

{
	int i = 0

	for (; z > 0; i++)

	{
		x[i] = y;

		z--;

	}

	return (x);

}
