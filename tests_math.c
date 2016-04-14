/*
 * File:   tests_math.c
 * Author: Jan Oškera
 *
 * Netbean tests CUnit test
 * Created on 13.4.2016, 22:17:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*
 * Simple C Test Suite
 */

long double lib_divide(long double a, long double b);

void testLib_divide(long double a, long double b, long double check) {
    long double result = lib_divide(a, b);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_divide (tests_math) message=error %Lf / %Lf != %Lf is %Lf\n",a,b,check,result);
    }           
}


long double lib_exp(long double a, unsigned int b);

void testLib_exp(long double a, unsigned int b, long double check) {
    long double result = lib_exp(a, b);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_exp (tests_math) message=error %Lf ^ %d != %Lf is %Lf\n",a,b,check,result);
    }
}

long double lib_factorial(unsigned long a);

void testLib_factorial(unsigned long a, long double check) {
    long double result = lib_factorial(a);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_factorial (tests_math) message=error !%lu != %Lf is %Lf\n",a,check,result);
    }
}

long double lib_mull(long double a, long double b);


void testLib_mull(long double a, long double b, long double check) {
    long double result = lib_mull(a, b);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_mull (tests_math) message=error %Lf * %Lf != %.100Lf is %.100Lf\n",a,b,check,result);
    }
}

long double lib_subb(long double a, long double b);

void testLib_subb(long double a, long double b, long double check) {
    long double result = lib_subb(a, b);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_subb (tests_math) message=error %Lf - %Lf != %Lf is %Lf\n",a,b,check,result);
    }
}

long double lib_sum(long double a, long double b);

void testLib_sum(long double a, long double b, long double check) {
    long double result = lib_sum(a, b);
    long double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_sum (tests_math) message=error %Lf + %Lf != %Lf is %Lf\n",a,b,check,result);
    }
}


int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% tests_math\n");
    printf("%%SUITE_STARTED%%\n");

    
    printf("%%TEST_STARTED%%  testLib_divide1 (tests_math)\n");
    testLib_divide(10.5,2,5.25);
    printf("%%TEST_FINISHED%% time=0 testLib_divide1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_divide2 (tests_math)\n");
    testLib_divide(6.25,-4,-1.5625);
    printf("%%TEST_FINISHED%% time=0 testLib_divide2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_divide3 (tests_math)\n");
    testLib_divide(6,0,LDBL_MAX);
    printf("%%TEST_FINISHED%% time=0 testLib_divide3 (tests_math)\n");
    
    
    printf("%%TEST_STARTED%%  testLib_exp1 (tests_math)\n");
    testLib_exp(-2.5,3,-15.625);
    printf("%%TEST_FINISHED%% time=0 testLib_exp1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_exp2 (tests_math)\n");
    testLib_exp(27,0,1);
    printf("%%TEST_FINISHED%% time=0 testLib_exp2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_exp3 (tests_math)\n");
    testLib_exp(-5,4,625);
    printf("%%TEST_FINISHED%% time=0 testLib_exp3 (tests_math)\n");
    
    
    printf("%%TEST_STARTED%%  testLib_factorial1 (tests_math)\n");
    testLib_factorial(5,120);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_factorial2 (tests_math)\n");
    testLib_factorial(0,1);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_factorial3 (tests_math)\n");
    testLib_factorial(1,1);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial3 (tests_math)\n");

    
    printf("%%TEST_STARTED%%  testLib_mull1 (tests_math)\n");
    testLib_mull(4.2,-4.1,-17.22);
    printf("%%TEST_FINISHED%% time=0 testLib_mull1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_mull2 (tests_math)\n");
    testLib_mull(10,0,0);
    printf("%%TEST_FINISHED%% time=0 testLib_mull2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_mull3 (tests_math)\n");
    testLib_mull(5.1,1,5.1);
    printf("%%TEST_FINISHED%% time=0 testLib_mull3 (tests_math)\n");

    
    printf("%%TEST_STARTED%%  testLib_subb1 (tests_math)\n");
    testLib_subb(27,10,17);
    printf("%%TEST_FINISHED%% time=0 testLib_subb1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_subb2 (tests_math)\n");
    testLib_subb(3.5,0,3.5);
    printf("%%TEST_FINISHED%% time=0 testLib_subb2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_subb3 (tests_math)\n");
    testLib_subb(2.123,-2.123,4.246);
    printf("%%TEST_FINISHED%% time=0 testLib_subb3 (tests_math)\n");

    
    printf("%%TEST_STARTED%%  testLib_sum1 (tests_math)\n");
    testLib_sum(15.3,10.3,25.6);
    printf("%%TEST_FINISHED%% time=0 testLib_sum1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_sum2 (tests_math)\n");
    testLib_sum(-14.1,0,-14.1);
    printf("%%TEST_FINISHED%% time=0 testLib_sum2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_sum3 (tests_math)\n");
    testLib_sum(-10.1,10.1,0);
    printf("%%TEST_FINISHED%% time=0 testLib_sum3 (tests_math)\n");
    

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
