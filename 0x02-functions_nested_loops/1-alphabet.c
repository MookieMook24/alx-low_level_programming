#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase.
 * Description: I play what I call the alphabet game.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)

{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
