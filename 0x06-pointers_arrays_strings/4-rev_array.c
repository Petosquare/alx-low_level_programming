#include "main.h"
/**
 * ra - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void ra(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

