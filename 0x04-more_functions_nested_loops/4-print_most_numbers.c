#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 escape 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			_putchar(c);
		}
	}
	_putchar('\n);
}
