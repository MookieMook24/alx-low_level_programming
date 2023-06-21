#include "main.h"
/**
 * print_alphabet_x10 - function that prints lowercases
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int b;

	b = 0;

	while (b < 10)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
	b++;
	}
}

