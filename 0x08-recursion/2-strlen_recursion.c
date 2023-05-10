#include "main.h"
/**
 *_strlen_recursion -calculates the length of the string by recursive
 *Return: length of string
 *@s: the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
