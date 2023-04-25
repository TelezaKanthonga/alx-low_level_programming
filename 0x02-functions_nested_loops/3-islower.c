#include "main.h"
/**
 * _islower - tests whether a character is a
 * lowercase letter.
 * @c: character to test.
 * Return:  0 if it is a lowercase letter and 1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
