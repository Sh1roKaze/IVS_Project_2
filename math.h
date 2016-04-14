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
* @param a {first long double value}
* @param b {second long double value}
* @post If overflow return LDBL_MAX from <float.h>
* @return a+b {long double value}
**/
long double lib_sum (long double a,long double b);

/**
* The function subtracts two numbers
* @param a {first long double value}
* @param b {second long double value}
* @post If overflow return LDBL_MAX from <float.h>
* @return a-b {long double value}
**/
long double lib_subb (long double a,long double b);

/**
* The function multiplies two numbers
* @param a {first long double value}
* @param b {second long double value}
* @post If overflow return LDBL_MAX from <float.h>
* @return a*b {long double value}
**/
long double lib_mull (long double a,long double b);

/**
* The function divides two numbers
* @param a {first long double value}
* @param b {second long double value}
* @post If b = 0 return LDBL_MAX from <float.h>
* @return a/b {long double value}
**/
long double lib_divide (long double a,long double b);

/**
* The function returns factorial of input
* @param a {unsigned long value}
* @post if overflow return LDBL_MAX from <float.h>
* @return a! {long double value}
**/
long double lib_factorial (unsigned long a);

/**
* The function returns power of input
* @param a {unsigned long value}
* @param b {unsigned int exponent}
* @post if overflow return LDBL_MAX from <float.h>
* @return a! {long double value}
**/
long double lib_exp (long double a, unsigned int b);

#endif //__math__
/*** END math.c ***/