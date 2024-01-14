/*
 * a simple c program that displays 'Hello World' on the console.
 */
#include <stdio.h>

int main()
{
  char name[] = "Mueghe Abuemkeze CHU"; // an array of characters (string not supported in c)
  int year = 2024;
  int age = year - 2003;
  float cgpa = 3.8;

  printf("Hello World\n");
  // logging a second sentence to the console
  printf("My name is %s! \nI am %d years old, an aspiring ethical hacker and systems engineer\n", name, age);
  printf("Working towards achieving a cgpa = %.2f with respect to academics. But does it really count?\n", cgpa);
  return 0;
}
