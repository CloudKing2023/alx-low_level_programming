#include "main.h"
#include <stdio.h>

/**
 * _abs - Print absolute value of an integer
 * @c: absolute value to be checked
 * Return:Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);

}
