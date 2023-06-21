#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase.
 * Description: I play what I call the alphabet game.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
