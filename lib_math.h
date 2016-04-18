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
#include <math.h>

/**
* The function sums two numbers
* @param a {first double value}
* @param b {second double value}
* @return a+b {double value}
**/
double lib_sum (double a,double b);

/**
* The function subtracts two numbers
* @param a {first double value}
* @param b {second double value}
* @return a-b {double value}
**/
double lib_sub (double a,double b);

/**
* The function multiplies two numbers
* @param a {first double value}
* @param b {second double value}
* @post If overflow return NAN from <math.h>
* @return a*b {double value}
**/
double lib_mul (double a,double b);

/**
* The function divides two numbers
* @param a {first double value}
* @param b {second double value}
* @post If b = 0 return NAN from <math.h>
* @return a/b {double value}
**/
double lib_div (double a,double b);

/**
* The function returns factorial of input
* @param a {double value}
* @post if a < 0 or whole return NAN from <math.h>
* @post if overflow return NAN from <math.h>
* @return a! {double value}
**/
double lib_factorial (double a);

/**
* The function returns power of input
* @param a {double value}
* @param b {double exponent}
* @post if b < 0 or whole return NAN from <math.h>
* @post if overflow return NAN from <math.h>
* @return a! {double value}
**/
double lib_exp (double a, double b);

/**
* The function returns absolut value of input
* @param a {double value}
* @return |a| {double value}   
**/ 
double lib_abs(double a);

/**
* The function returns ln of input
* @param a {double value}
* @post if a <= 0 return NAN from <math.h>
* @return ln(a) {double value}   
**/ 
double lib_ln(double a);

#endif //__math__
/*** END math.c ***/
