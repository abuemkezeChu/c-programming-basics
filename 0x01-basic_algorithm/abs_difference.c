#include <stdio.h>
#include <stdlib.h>
int main()
{
  const int NUMBER = 51;
  int n, diff;
  printf("Enter a real number: ");
  scanf("%d", &n);
  // calculate the difference
  diff = n - NUMBER;
  if (n > NUMBER)
  {
    printf("Absolute difference is %d : \n", 3 * abs(diff));
  }
  else
  {
    printf("Absolute difference is %d : \n", abs(diff));
  }

  return 0;
}