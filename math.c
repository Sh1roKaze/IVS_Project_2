/*
 * File:   tests_math.c
 * Author: Jan Oškera
 *
 * Created on 13.4.2016, 22:17:28
 */

#include "math.h"

long double lib_sum (long double a,long double b){
    
    if (b != 0)
        if (a > 0 && b > LDBL_MAX - a)
            return LDBL_MAX;
        else 
            if (a < 0 && b < LDBL_MIN - a) 
                return LDBL_MAX;
            
    return a + b;
}

long double lib_subb (long double a,long double b){
    
    if (b != 0)
        if (a > 0 && (-b) > LDBL_MAX - a) 
            return LDBL_MAX;
        else 
            if (a < 0 && (-b) < LDBL_MIN - a) 
                return LDBL_MAX;
    
    
    return a - b;
}

long double lib_mull (long double a,long double b){
    long double x = a * b;
    long double precision = 0.0000000001;
    
    if (a != 0) 
        if(((x / a) > (b + precision)) || ((x / a) < (b - precision)))
            return LDBL_MAX;
 
    return a * b;
}

long double lib_divide (long double a,long double b){
    if (b == 0)
        return LDBL_MAX;
    else
        return a / b;
}

long double lib_factorial (unsigned long a){
    long double result = (long double)a;
    long double x = 0;
    
    if (a == 0)
        return 1;

    if (a == 1)
        return result;
    else
        a--;
    
    while (a != 1){
        x = result * a;
        if ((result != 0) && ((x / result) != a))
            return LDBL_MAX;

        result *=a;
        a--;
    }

    return result;
}

long double lib_exp (long double a, unsigned int b){
    long double result = a;
    long double x = 0;
    
    if (b == 0)
        return 1;
    
    while (b != 1){
        x = result * a;
        if ((result != 0) && ((x / result) != a))
            return LDBL_MAX;

        result *=a;
        b--;
    }

    return result;
}
