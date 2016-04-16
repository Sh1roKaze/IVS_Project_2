/*
 * File:   tests_math.c
 * Author: Jan Oškera
 *
 * Created on 13.4.2016, 22:17:28
 */

#include "lib_math.h"

double lib_sum (double a,double b){
    
        if ((a > 0) && (b > DBL_MAX - a)){
            return NAN;
	}
        else{ 
            if ((a < 0) && (b < (DBL_MIN - a))) 
                return NAN;
            }
            
    return a + b;
}

double lib_sub (double a,double b){
    
        if ((a > 0) && ((-b) > (DBL_MAX - a))){ 
            return NAN;
	}
        else{ 
            if ((a < 0) && ((-b) < (DBL_MIN - a))){ 
                return NAN;
	    }
	}
    
    return a - b;
}

double lib_mul (double a,double b){
    double x = a * b;
    double precision = 0.0000000001;
    
    if (a != 0){ 
        if(((x / a) > (b + precision)) || ((x / a) < (b - precision))){
            return NAN;
	}
    }
 
    return a * b;
}

double lib_div (double a,double b){
    if (b == 0){
        return NAN;
    }
    else{
        return a / b;
    }
}

double lib_factorial (double a){
    double result = a;
    double x = 0;
    double precision = 0.0000000001;
    
    if ((a < 0) || (ceil(a) != a)){ 
        return NAN;
    }
    
    if (a == 0){
        return 1;
    }

    if (a == 1){
        return result;
    }
    else{
        a--;
    }
    
    while (a != 1){
        x = result * a;
        if (result != 0){
            if(((x / result) > (a + precision)) || ((x / result) < (a - precision))){
                return NAN;
	    }
	}
        result *=a;
        a--;
    }

    return result;
}

double lib_exp (double a, double b){
    double result = a;
    double x = 0;
    double precision = 0.0000000001;
    
    if ((b < 0) || (ceil(b) != b)){ 
        return NAN;
    }
    
    if (b == 0){
        return 1;
    }
    
    while (b != 1){
        x = result * a;
        if (result != 0){
            if(((x / result) > (a + precision)) || ((x / result) < (a - precision))){
                return NAN;
	    }	
	}

        result *=a;
        b--;
    }

    return result;
}

double lib_abs(double x)
{
    if(x<0){
        return x * (-1);
    }
    else{
        return x;
    }
}

double lib_ln( double x) {

    double x_result,x_help, x_prev, iterc;
    double eps = 0.00000000001;

    if ( x > 0 ) {

      x_prev = 0;
      iterc = 1;
      if ( x < 1 ) {

        x = 1-x;
        x_result = -x;
        x_help = x;

        while ( lib_abs(x_result) - lib_abs(x_prev) > eps ) {
            iterc++;
            x_help *= x;
            x_prev = x_result;
            x_result -= x_help/iterc;
        }

      } 
	else {

        x = (x-1)/x;
        x_result = x;
        x_help = x;


        while ( lib_abs(x_result) - lib_abs(x_prev) > eps) {
            iterc++;
            x_help *= x;
            x_prev = x_result;
            x_result += x_help/iterc;
        }

        }

    } else { return NAN; }

    return x_result;
}
