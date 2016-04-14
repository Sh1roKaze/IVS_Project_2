/*
 * File:   tests_math.c
 * Author: Jan Oškera
 *
 * Created on 13.4.2016, 22:17:28
 */

#include "math.h"

long double lib_sum (long double a,long double b){
    return a+b;
}

long double lib_subb (long double a,long double b){
    return a-b;
}

long double lib_mull (long double a,long double b){
    return a*b;
}

long double lib_divide (long double a,long double b){
    if (b == 0)
        return 0;
    else
        return a/b;
}

long double lib_factorial (unsigned long a){
    long double result = (long double)a;

    if (a == 0)
        return 1;

    if (a == 1)
        return result;
    else
        a--;
    
    while (a != 1){
        result *=a;
        a--;
    }

    return result;
}

long double lib_exp (long double a, unsigned int b){
    long double result = a;

    if (b == 0)
        return 1;

    while (b != 1){
        result *=a;
        b--;
    }

    return result;
}