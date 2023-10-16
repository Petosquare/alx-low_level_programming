#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @str: The string to print
 * Return: void
 */

void print_rev(char *str)

{
	int rev = 0;
	int o;

	while (*str != '\0')
	{
		rev++;
		str++;
	}
	str--;
	for (o = rev; o > 0; o--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
