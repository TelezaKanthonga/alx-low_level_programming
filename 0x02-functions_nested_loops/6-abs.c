#include "main.h"
/**
 * _abs - computes an absolute value an integer.
 * @i: the integer
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
