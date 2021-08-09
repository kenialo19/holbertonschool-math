#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <math.h>

/**
 * struct complex_t - structure containing two doubles
 * @re: part real.
 * @im: part imaginary.
 */

typedef struct complex_t
{
	double re;
	double im;

} complex;

/* PROTOTYPE*/

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);

#endif
