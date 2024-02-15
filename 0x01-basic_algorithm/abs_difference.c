#include <stdio.h>
#include <math.h>
int main()
{
  const int NUMBER = 51;
  int n, diff;
  printf("Enter a real number: ");
  scanf("%d", &n);
  // calculate the difference
  diff = n - NUMBER;
  printf("Absolute difference is : ", abs(diff));
  return 0;
}