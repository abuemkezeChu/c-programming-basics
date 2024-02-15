#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter num1: ");
  scanf("%d", &x);
  printf("Enter num2: ");
  scanf("%d", &y);
  // check condition
  if (x == y)
  {
    printf("For num1 == num2, Sum of the two numbers : %d\n", (x + y) * 3);
  }
  else
  {
    printf("Sum of the two numbers : %d\n", (x + y));
  }

  return 0;
}