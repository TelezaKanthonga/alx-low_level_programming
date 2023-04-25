#include "main.h"

/**
 * print_alphabet - Prints the English alphabet from a to z.
 *
 * Description: Uses _putchar to print each letter of the alphabet, followed by a new line.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

