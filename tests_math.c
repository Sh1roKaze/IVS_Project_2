#include <stdio.h>
#include <stdbool.h>
#include "minunit.h"
#include "lib_math.h"
 
int tests_run = 0;

double precision = 0.0000000001;

char * test_sum1() {
   double a = lib_sum(13.3,3.3);
   double check = 16.6;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
      
   mu_assert("error, lib_sum 13.3 + 3.3 != 16.6", result);
   return 0;
}

char * test_sum2() {
   double a = lib_sum(2.2,-1.1);
   double check = 1.1;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_sum 2.2 +(-1.1) != 1.1", result);
   return 0;
}

char * test_sum3() {
   double a = lib_sum(0,-0);
   double check = 0;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_sum 0 - (-0) != 0", result);
   return 0;
}

char * test_sub1() {
   double a = lib_sub(13.3,3.3);
   double check = 10;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_sub 13.3 - 3.3 != 10", result);
   return 0;
}

char * test_sub2() {
   double a = lib_sub(2.2,-1.1);
   double check = 3.3;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_sub 2.2 -(-1.1) != 3.3", result);
   return 0;
}

char * test_sub3() {
   double a = lib_sub(0,-0);
   double check = 0;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_sub 0 - (-0) != 0", result);
   return 0;
}

char * test_mul1() {
   double a = lib_mul (10.1,2);
   double check = 20.2;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_mul 10.1 * 2 != 20.2", result);
   return 0;
}

char * test_mul2() {
   double a = lib_mul (10.1,-2);
   double check = -20.2;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_mul 10.1 * (-2) != -20.2", result);
   return 0;
}

char * test_mul3() {
   double a = lib_mul (999999999999999,100000000000000000000000000000000000000);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_mul 99999999999... * 100000000000... != NAN", result);
   return 0;
}

char * test_div1() {
   double a = lib_div (5,2);
   double check = 2.5;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_div 5 / 2 != 2.5", result);
   return 0;
}

char * test_div2() {
   double a = lib_div (5,-2.5);
   double check = -2;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_div 5 / (-2.5) != -2", result);
   return 0;
}

char * test_div3() {
   double a = lib_div (5,0);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_div 5 / 0 != NAN", result);
   return 0;
}

char * test_factorial1() {
   double a = lib_factorial (5);
   double check = 120;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_factorial 5! != 120", result);
   return 0;
}

char * test_factorial2() {
   double a = lib_factorial (-5);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_factorial -5! != NAN", result);
   return 0;
}

char * test_factorial3() {
   double a = lib_factorial (2.1);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_factorial 2.1! != NAN", result);
   return 0;
}

char * test_factorial4() {
   double a = lib_factorial (175);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_factorial 175! != NAN", result);
   return 0;
}

char * test_exp1() {
   double a = lib_exp (2.3,2);
   double check = 5.29;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_exp 2.3 * 2 != 5.29", result);
   return 0;
}

char * test_exp2() {
   double a = lib_exp (2.3,-2);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_exp 2.3 * (-2) != NAN", result);
   return 0;
}

char * test_exp3() {
   double a = lib_exp (2.3,2.1);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_exp 2.3 * 2.1 != NAN", result);
   return 0;
}

char * test_exp4() {
   double a = lib_exp (2.3,0);
   double check = 1;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_exp 2.3 * 0 != 1", result);
   return 0;
}

char * test_abs1() {
   double a = lib_abs (-2.3);
   double check = 2.3;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_abs -2.3 != 2.3", result);
   return 0;
}

char * test_abs2() {
   double a = lib_abs (2.3);
   double check = 2.3;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_abs 2.3 != 2.3", result);
   return 0;
}

char * test_abs3() {
   double a = lib_abs (0);
   double check = 0;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_abs 0 != 0", result);
   return 0;
}

char * test_ln1() {
   double a = lib_ln (0);
   double check = NAN;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_ln ln(0) != NAN", result);
   return 0;
}

char * test_ln2() {
   double a = lib_ln (0.5);
   double check = -0.6931471806;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_ln ln(0.5) != -0.6931471806", result);
   return 0;
}

char * test_ln3() {
   double a = lib_ln (1);
   double check = 0;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_ln ln(1) != 0", result);
   return 0;
}

char * test_ln4() {
   double a = lib_ln (10);
   double check = 2.302585093;
   bool result = true;
   
   if (((a + precision) < check) || ((a - precision) > check))
      result = false;
   
   mu_assert("error, lib_ln ln(10) != 2.302585093", result);
   return 0;
}

char * all_tests() {
   mu_run_test(test_sum1);
   mu_run_test(test_sum2);
   mu_run_test(test_sum3);
   mu_run_test(test_sub1);
   mu_run_test(test_sub2);
   mu_run_test(test_sub3);
   mu_run_test(test_mul1);
   mu_run_test(test_mul2);
   mu_run_test(test_mul3);
   mu_run_test(test_div1);
   mu_run_test(test_div2);
   mu_run_test(test_div3);
   mu_run_test(test_factorial1);
   mu_run_test(test_factorial2);
   mu_run_test(test_factorial3);
   mu_run_test(test_factorial4);
   mu_run_test(test_exp1);
   mu_run_test(test_exp2);
   mu_run_test(test_exp3);
   mu_run_test(test_exp4);
   mu_run_test(test_abs1);
   mu_run_test(test_abs2);
   mu_run_test(test_abs3);
   mu_run_test(test_ln1);
   mu_run_test(test_ln2);
   mu_run_test(test_ln3);
   mu_run_test(test_ln4);
   
   return 0;
}
 
int main(int argc, char **argv) {
   
   char *result = all_tests();
   
   if (result != 0) {
      printf("%s\n", result);
   }
   else {
      printf("ALL TESTS PASSED\n");
   }
   printf("Tests run: %d\n", tests_run);
 
   return result != 0;
}