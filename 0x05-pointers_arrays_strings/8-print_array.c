#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array of integers
 * @n: is the number of elements OF the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
		if (i != (n - 1))
		{
			printf(", ");
		}
			printf("\n");
}

