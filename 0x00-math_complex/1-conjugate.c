#include "holberton.h"

/**
 * conjugate - dreturns the conjugate of a given complex number.
 * @c: number complex.
 *
 * Return: void.
 */

complex conjugate(complex c)
{
    complex k;
    
    k.im = c.im * -1;
    k.re = c.re;
    return (k);
}