#include "holberton.h"
#include <math.h>

/**
 * addition - performs the addition operation.
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 *
 * Return: void.
 */

void addition(complex c1, complex c2, complex *c3)
{
	complex op;

	op.re = (c1.re) + (c2.re);
	op.im = (c1.im) + (c2.im);

	*c3 = op;
}
