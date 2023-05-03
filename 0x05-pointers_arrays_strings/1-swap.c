#include "main.h"
/**
  * swap_int - Swaps the values of two integers
  * @a: A pointer to first integer
  * @b: A pointer to second integer
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
