#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of an array of integers
  * @a: Pointer to the first element of the  Array
  * @n:Number of elements to print
  * Return: void
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
