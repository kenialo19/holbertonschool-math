#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays the complex numbers.
 * @c: integer.
 *
 * Return: void.
 */
void display_complex_number(complex c)
{
	char h = '+';

	if (c.im == 0 && c.re == 0)
	{
	}

	else if (c.im == 0 && c.re != 0)
	{
		printf("%.0f\n", c.re);
	}
	else if (c.im != 0 && c.re == 0)
	{
		printf("%.0fi\n", c.im);
	}
	else
	{
		if (c.im < 0)
		{
			h = '-';
			c.im = c.im * -1;
		}
		printf("%.0f %c %.0fi\n", c.re, h, c.im);
	}
}
