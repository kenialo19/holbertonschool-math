#include <math.h>
#include "holberton.h"

/**
 * division - performs the division operation to complex numbers.
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 *
 * Return: void.
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = 0, b = 0;
	complex div;

	a = ((c1.re * c2.re) + (c1.im * c2.im)) /
	    ((c2.re * c2.re) + (c2.im * c2.im));
	b = ((c1.im * c2.re) - (c1.re * c2.im)) /
	    ((c2.re * c2.re) + (c2.im * c2.im));

	div.re = a;
	div.im = b;

	*c3 = div;
}
