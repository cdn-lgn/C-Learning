#include <stdio.h>
int main()
{
  // 1. Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
  int num1 = 34, num2 = 5;
  printf("sum %d\n", (num1 + num2));
  printf("substract %d\n", (num1 - num2));
  printf("divide %d\n", (num1 / num2));
  printf("multiple %d\n", (num1 * num2));
  printf("Modulus (reminder) %d\n", (num1 % num2));

  printf("\n==============\n");

  // 2. Given an integer value, convert it to a floating-point value and print both.
  int var = 23;
  printf("integer variable var = %d\n", var);
  float var_f = (float)var;
  printf("floating variable var_f = %f\n", var_f);

  printf("\n==============\n");

  // 3. Create a program to calculate product of two floating points numbers.
  float f_num_1 = 3.14, f_num_2 = 2.34;
  printf("product of %.2f and %.2f is: %.2f\n", f_num_1, f_num_2, (f_num_1 + f_num_2));

  printf("\n==============\n");

  // 4. Create a program to convert Fahrenheit to Celsius °C = (°F - 32) × 5/9
  int temp_F = 110;
  float temp_C = ((temp_F - 32) * 5) / 9;
  printf("%d Fahrenheit in Celsius will be %.2f\n", temp_F, temp_C);

  return 0;
}
