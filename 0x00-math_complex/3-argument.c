#include <math.h>
#include "holberton.h"

/**
 * argument - returns the argument
 * @c: complex number.
 *
 * Return: argument
 */
double argument(complex c)
{
	double x = 0;

	x = atan(c.im) * c.re;
	return (x);
}
