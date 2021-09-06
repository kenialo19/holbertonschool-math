#include "heron.h"

/**
 * *heron - unction that return the Heron sequence until having 
 * convergence with an error less or equal to.
 * 
 * 
 */
void insertarEnLista (tpuntero *cabeza, double e){
    tpuntero nuevo;
    nuevo = malloc(sizeof(t_cell));
    nuevo->elt = e;
    nuevo->next = *cabeza; 
    *cabeza = nuevo;
}

t_cell *heron(double p, double x0)
{
    double b = p, u0 = x0;
    double v_error = pow(10, -7);
    int i = 0;
    double un = u0, err_res = 1;
    t_cell *ptr;
    double sq = 0;
    ptr = malloc(sizeof(t_cell));
    if (!ptr)
    {
        return (NULL);
    }
    sq = sqrt(b);
    ptr->elt = un;
    /*printf("U%d = [%0.7f]\n", i, un );*/
    for (i = 1; err_res > v_error; i++)
    {
        un = 0.5 * (un + (b / un));
        /*printf("U%d = [%0.9f] - ", i, un);printf("[%0.9f] = ", sqrt(p));
		printf("[%0.9f]\n", un - sqrt(p));*/
        err_res = un - sq;
        insertarEnLista(&ptr, un);
        /*printf("err_res = [%0.9f]\n", err_res);*/
        /*printf("ptr [%0.9f]", ptr->elt);*/
    }
    /*printf("p = [%f], sqrt(p) = %0.7f\n", p, sqrt(p));printf("error = [%0.7f]\n", v_error);*/
    return (ptr);
}