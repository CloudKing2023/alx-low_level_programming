#include "main.h"

/**
 * print_last_digit - Check for last digits
 * @n: last number to be checked
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 10)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
