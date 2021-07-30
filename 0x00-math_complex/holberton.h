#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

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

#endif
