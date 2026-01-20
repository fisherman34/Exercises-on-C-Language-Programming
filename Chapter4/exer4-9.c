#include <stdio.h>

int main()
{
  int n1, n2, a, b, c;

  printf("Input an integer: ");
  scanf("%d", &n1);
  a = n1 / 100;
  b = n1 / 10 % 10;
  c = n1 % 10;
  n2 = a + b * 10 + c * 100;
  printf("the new number is %d\n", n2);
  return 0;
}