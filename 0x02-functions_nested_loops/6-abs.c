#include "main.h"
/**
 * _abs - A  function that computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: A 0  or absolute number.
 */

int _abs(int c)
{
	if (c < 0)
	{
	int _abs_val;

	_abs_val = c * -1;
	return (_abs_val);
	}
	return (c);
}
