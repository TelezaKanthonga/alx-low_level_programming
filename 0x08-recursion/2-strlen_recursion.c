#include "main.h"
/**
 * -strlen_recursion -  calculates the length of the string by recursively traversing it
 * @s: The string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
