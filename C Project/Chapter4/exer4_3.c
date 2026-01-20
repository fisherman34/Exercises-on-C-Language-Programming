#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, c, s;

  scanf("%f", &r);
  c = 2 * PI * r;
  s = PI * r * r;
  printf("c = %f s = %f\n", c, s);
  return 0;
}
