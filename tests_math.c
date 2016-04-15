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

double lib_div(double a, double b);

void testLib_div(double a, double b, double check) {
    double result = lib_div(a, b);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_div (tests_math) message=error %Lf / %f != %f is %f\n",a,b,check,result);
    }           
}


double lib_exp(double a, unsigned int b);

void testLib_exp(double a, unsigned int b, double check) {
    double result = lib_exp(a, b);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_exp (tests_math) message=error %f ^ %u != %f is %f\n",a,b,check,result);
    }
}

double lib_factorial(unsigned int a);

void testLib_factorial(unsigned int a, double check) {
    double result = lib_factorial(a);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_factorial (tests_math) message=error !%u != %f is %f\n",a,check,result);
    }
}

double lib_mul(double a, double b);


void testLib_mul(double a, double b, double check) {
    double result = lib_mul(a, b);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_mul (tests_math) message=error %f * %f != %.100f is %.100f\n",a,b,check,result);
    }
}

double lib_sub(double a, double b);

void testLib_sub(double a, double b, double check) {
    double result = lib_sub(a, b);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_sub (tests_math) message=error %f - %f != %f is %f\n",a,b,check,result);
    }
}

double lib_sum(double a, double b);

void testLib_sum(double a, double b, double check) {
    double result = lib_sum(a, b);
    double precision = 0.0000000001;
    if (((result + precision) < check) || ((result - precision) > check)) {
        printf("%%TEST_FAILED%% time=0 testname=testLib_sum (tests_math) message=error %f + %f != %f is %f\n",a,b,check,result);
    }
}


int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% tests_math\n");
    printf("%%SUITE_STARTED%%\n");

    
    printf("%%TEST_STARTED%%  testLib_div1 (tests_math)\n");
    testLib_div(10.5,2,5.25);
    printf("%%TEST_FINISHED%% time=0 testLib_div1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_div2 (tests_math)\n");
    testLib_div(6.25,-4,-1.5625);
    printf("%%TEST_FINISHED%% time=0 testLib_div2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_div3 (tests_math)\n");
    testLib_div(6,0,DBL_MAX);
    printf("%%TEST_FINISHED%% time=0 testLib_div3 (tests_math)\n");
    
    
    printf("%%TEST_STARTED%%  testLib_exp1 (tests_math)\n");
    testLib_exp(-2.5,3,-15.625);
    printf("%%TEST_FINISHED%% time=0 testLib_exp1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_exp2 (tests_math)\n");
    testLib_exp(27,0,1);
    printf("%%TEST_FINISHED%% time=0 testLib_exp2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_exp3 (tests_math)\n");
    testLib_exp(-9999999,100,DBL_MAX);
    printf("%%TEST_FINISHED%% time=0 testLib_exp3 (tests_math)\n");
    
    
    printf("%%TEST_STARTED%%  testLib_factorial1 (tests_math)\n");
    testLib_factorial(5,120);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_factorial2 (tests_math)\n");
    testLib_factorial(0,1);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_factorial3 (tests_math)\n");
    testLib_factorial(1550,DBL_MAX);
    printf("%%TEST_FINISHED%% time=0 testLib_factorial3 (tests_math)\n");

    
    printf("%%TEST_STARTED%%  testLib_mul1 (tests_math)\n");
    testLib_mul(4.2,-4.1,-17.22);
    printf("%%TEST_FINISHED%% time=0 testLib_mul1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_mul2 (tests_math)\n");
    testLib_mul(10,0,0);
    printf("%%TEST_FINISHED%% time=0 testLib_mul2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_mul3 (tests_math)\n");
    testLib_mul(999999999999999,100000000000000000000000000000000000000,DBL_MAX);
    printf("%%TEST_FINISHED%% time=0 testLib_mul3 (tests_math)\n");

    
    printf("%%TEST_STARTED%%  testLib_sub1 (tests_math)\n");
    testLib_sub(27,10,17);
    printf("%%TEST_FINISHED%% time=0 testLib_sub1 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_sub2 (tests_math)\n");
    testLib_sub(3.5,0,3.5);
    printf("%%TEST_FINISHED%% time=0 testLib_sub2 (tests_math)\n");
    
    printf("%%TEST_STARTED%%  testLib_sub3 (tests_math)\n");
    testLib_sub(2.123,-2.123,4.246);
    printf("%%TEST_FINISHED%% time=0 testLib_sub3 (tests_math)\n");

    
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
