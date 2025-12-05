#include <stdio.h>

int main()
{
  // \t tab => add tab
  printf("Mohit\tRaina\n");
  printf("========================\n");

  // \b backspace => remove one previous letter
  printf("Mohit\bRaina\n");
  printf("========================\n");

  // \n new line => add new line
  printf("Mohit\nRaina\n");
  printf("========================\n");

  // \` insert single qoute text in line
  printf("Mohit \'Raina\' \n");
  printf("========================\n");

  // \" insert double qoute text in line
  printf("Mohit \"Raina\" \n");
  printf("========================\n");

  // \/ insert backslash text in line
  printf("Mohit \\Raina\n");

  return 0;
}
