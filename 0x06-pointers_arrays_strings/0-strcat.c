#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)

{

	int dlen = 0, j;

	while (dest[dlen])
		dlen++;
/* @src: The source string*/
	for (j = 0; src[j] != 0; j++)
	{
		dest[dlen] = src[j];
		dlen++;
	}
/* Return: A pointer to the resulting string dest*/
	dest[dlen] = '\0';
	return (dest);
}
