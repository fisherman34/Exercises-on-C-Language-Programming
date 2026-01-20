#include <stdio.h>

int main()
{
  float c, f;

  printf("Input C: ");
  scanf("%f", &c);
  f = (c + 32.0)* 9.0/ 5.0;
  printf("F = %.2f\n", f);
  return 0;
}