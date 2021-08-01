#include <math.h>
#include "holberton.h"

/**
 * multiplication - erforms the multiplication operation to complex numbers.
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 *
 * Return: void.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	complex mul;

	a = ((c1.re) * (c2.re));
	b = ((c1.re) * (c2.im));
	c = ((c1.im) * (c2.re));
	d = ((c1.im) * (c2.im));

	e = b + c;
	f = a - d;
	mul.re = f;
	mul.im = e;

	*c3 = mul;
}
