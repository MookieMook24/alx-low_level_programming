#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9)
 *@c: Character that needs to be checked
 * Return: 1 if c is a digit, return 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
