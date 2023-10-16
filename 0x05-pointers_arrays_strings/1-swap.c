#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
/* this function swaps the values of two integers */
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

