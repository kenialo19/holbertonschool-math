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
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
}
