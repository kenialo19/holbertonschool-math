#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - update the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * @m: modulus
 * @arg: arguments
 * @c3: pointer complex number.
 *
 * Return: void.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	complex polar;
	double x = 0, y = 0;

	x = m * cos(arg);
	y = m * sin(arg);

	polar.re = x;
	polar.im = y;

	*c3 = polar;
}
