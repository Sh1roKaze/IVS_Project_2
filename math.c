/*
 * File:   tests_math.c
 * Author: Jan Oškera
 *
 * Created on 13.4.2016, 22:17:28
 */

#include "math.h"

double lib_sum (double a,double b){
    
    if (b != 0)
        if (a > 0 && b > DBL_MAX - a)
            return DBL_MAX;
        else 
            if (a < 0 && b < DBL_MIN - a) 
                return DBL_MAX;
            
    return a + b;
}

double lib_sub (double a,double b){
    
    if (b != 0)
        if (a > 0 && (-b) > DBL_MAX - a) 
            return DBL_MAX;
        else 
            if (a < 0 && (-b) < DBL_MIN - a) 
                return DBL_MAX;
    
    
    return a - b;
}

double lib_mul (double a,double b){
    double x = a * b;
    double precision = 0.0000000001;
    
    if (a != 0) 
        if(((x / a) > (b + precision)) || ((x / a) < (b - precision)))
            return DBL_MAX;
 
    return a * b;
}

double lib_div (double a,double b){
    if (b == 0)
        return DBL_MAX;
    else
        return a / b;
}

double lib_factorial (unsigned int a){
    double result = (double)a;
    double x = 0;
    
    if (a == 0)
        return 1;

    if (a == 1)
        return result;
    else
        a--;
    
    while (a != 1){
        x = result * a;
        if ((result != 0) && ((x / result) != a))
            return DBL_MAX;

        result *=a;
        a--;
    }

    return result;
}

double lib_exp (double a, unsigned int b){
    double result = a;
    double x = 0;
    
    if (b == 0)
        return 1;
    
    while (b != 1){
        x = result * a;
        if ((result != 0) && ((x / result) != a))
            return DBL_MAX;

        result *=a;
        b--;
    }

    return result;
}
