#include <stdio.h>
int main()
{
  float x, y, a;

  printf("Enter value of X: ");
  scanf("%f", &x);

  printf("Enter value of Y: ");
  scanf("%f", &y);

  a = (x + y) * (x + y) * (x + y);

  printf("Result = %.2f\n", a);

  return 0;
}
