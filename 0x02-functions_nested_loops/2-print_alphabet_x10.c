#include "main.h"

/**
 * print_alphabet_x10 - Prints the English alphabet from a to z "Uses _putchar to print each letter of the alphabet," 10 times.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
