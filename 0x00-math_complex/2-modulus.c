#include <math.h>
#include "holberton.h"


/**
 * modulus - returns the modulus of a given complex number.
 * @c: complex number.
 * 
 * Return: modulus
 */

double modulus(complex c)
{
    double x = 0, y = 0;
    x = ((c.re * c.re) + (c.im * c.im));
    y = sqrt(x);

    return (y);
}