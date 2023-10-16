#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (i < len && f == 0)
	{

