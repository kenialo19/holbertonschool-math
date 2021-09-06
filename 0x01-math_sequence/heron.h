#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct heron
{
	double elt;
	struct heron *next;

} t_cell;

typedef t_cell *tpuntero;

/* PROTOTYPE*/


t_cell *heron(double p, double x0);

#endif /* _HOLBERTTON.H */