#include <stdio.h>

int main()
{
  /*
   * %c = character
   * %s = string (array of characters)
   * %d = integer
   * %f = float
   * %lf = double
   */

  /**
   * %.1 = decimal precision
   * %1 = minimum field width
   * %- left align
   */

  float item1 = 99.99;
  float item2 = 75.00;
  float item3 = 5.75;

  printf("Item 1: $%.2f\n", item1);
  printf("Item 2: $%.2f\n", item2);
  printf("Item 3: $%.2f\n", item3);

  return 0;
}