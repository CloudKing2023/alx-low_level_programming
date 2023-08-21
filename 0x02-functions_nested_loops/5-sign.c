#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n:character to be ched for
 * Return: 1 for positive num,-1 for negative or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
