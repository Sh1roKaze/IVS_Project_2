/**
 * @file math.c
 * @author Jan Oškera
 * @version 1.0
 *
 * This is math library with basic functions.
 * Created on 13. duben 2016, 22:26
 */

#ifndef __math__
#define __math__

#include <float.h>

/**
* The function sums two numbers
* @param a {first double value}
* @param b {second double value}
* @post If overflow return DBL_MAX from <float.h>
* @return a+b {double value}
**/
double lib_sum (double a,double b);

/**
* The function subtracts two numbers
* @param a {first double value}
* @param b {second double value}
* @post If overflow return DBL_MAX from <float.h>
* @return a-b {double value}
**/
double lib_sub (double a,double b);

/**
* The function multiplies two numbers
* @param a {first double value}
* @param b {second double value}
* @post If overflow return DBL_MAX from <float.h>
* @return a*b {double value}
**/
double lib_mul (double a,double b);

/**
* The function divides two numbers
* @param a {first double value}
* @param b {second double value}
* @post If b = 0 return DBL_MAX from <float.h>
* @return a/b {double value}
**/
double lib_div (double a,double b);

/**
* The function returns factorial of input
* @param a {unsigned int value}
* @post if overflow return DBL_MAX from <float.h>
* @return a! {double value}
**/
double lib_factorial (unsigned int a);

/**
* The function returns power of input
* @param a {unsigned long value}
* @param b {unsigned int exponent}
* @post if overflow return DBL_MAX from <float.h>
* @return a! {double value}
**/
double lib_exp (double a, unsigned int b);

#endif //__math__
/*** END math.c ***/
