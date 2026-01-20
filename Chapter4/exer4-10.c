#include <stdio.h>

int main()
{
  int a, b, c, t;

  printf("Input three integers: ");
  scanf("%d%d%d", &a, &b, &c);
  t = c; c = b; b = a; a = t;
  printf("After swap: %d %d %d\n", a, b, c);
  return 0;
}