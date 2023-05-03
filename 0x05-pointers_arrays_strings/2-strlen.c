#include "main.h"
/**
  * _strlen - Computes the length of the string
  * @s: Apointer to the string to count
  * Return: String length
  */
int _strlen(char *s)
{
	int stringLen = 0;

	for (; *s != '\0'; s++)
	{
		stringLen++;
	}

	return (stringLen);
}
