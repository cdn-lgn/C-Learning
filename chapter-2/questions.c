// date 6 DEC 25
#include <stdio.h>
#define PI 3.14159
int main()
{

  // 1. Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
  int age = 25;
  short count = 10;
  long population = 8000000;
  unsigned int score = 95;
  printf("size of age is %zu \n", sizeof(age));
  printf("size of count is %zu \n", sizeof(count));
  printf("size of population is %zu \n", sizeof(population));
  printf("size of score is %zu \n", sizeof(score));

  float temperature = 36.5f;
  double price = 999.99;
  long double distance = 12345.6789;
  printf("size of temperature is %zu \n", sizeof(temperature));
  printf("size of price is %zu \n", sizeof(price));
  printf("size of distance is %zu \n", sizeof(distance));

  char grade = 'A';
  signed char level = -5;
  unsigned char smallNum = 255;
  printf("size of grade is %zu \n", sizeof(grade));
  printf("size of level is %zu \n", sizeof(level));
  printf("size of smallNum is %zu \n", sizeof(smallNum));

  printf("\n\n====================\n\n");

  // 2. Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
  char first_name[10], last_name[10];
  int your_age;

  printf("Enter your first name: ");
  scanf("%10s", first_name);
  printf("Enter your last name: ");
  scanf("%10s", last_name);
  printf("Enter your age: ");
  scanf("%d", &your_age);
  printf("Your name is %s %s and you are %d years old\n", first_name, last_name, your_age);

  printf("\n\n====================\n\n");

  // 3. Create a program to print the area of a square by inputting its side length
  int square_side, square_area;

  printf("Enter lenght of side of square: ");
  scanf("%d", &square_side);

  square_area = square_side * square_side;
  printf("The area of a square with side length %d units is %d square units.\n", square_side, square_area);

  printf("\n\n====================\n\n");

  // 4. Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
  double circle_radius, circle_circumference, circle_area;

  printf("Enter lenght of radius of circle: ");
  scanf("%lf", &circle_radius);

  circle_circumference = 2 * PI * circle_radius;
  printf("The circumference of a circle with radius length %.2f units is %.2f units.\n", circle_radius, circle_circumference);

  circle_area = PI * circle_radius * circle_radius;
  printf("The area of a circle with radius length %.2f units is %.2f units.\n", circle_radius, circle_area);

  printf("\n\n====================\n\n");

  // 5. Create a program to swap two numbers.
  int num1 = 3, num2 = 1, num3;
  printf("Num 1 is: %d\n", num1);
  printf("Num 2 is: %d\n", num2);

  num3 = num2;
  num2 = num1;
  num1 = num3;
  printf("Num 1 is: %d\n", num1);
  printf("Num 2 is: %d\n", num2);

  return 0;
}
