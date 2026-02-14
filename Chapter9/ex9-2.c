/*
输入两个数，使其从大到小输出
*/

#include <stdio.h>

int main()
{
  int *p1, *p2, *p, a, b;

  scanf("%d,%d", &a, &b);
  p1 = &a; p2 = &b;
  if(a < b)
  { p= p1; p1 = p2; p2 = p;}
  printf("a = %d, b = %d\n", a, b);
  printf("max = %d, min = %d\n", *p1, *p2);
  printf("%X %X %X", p1, p2, p);
  return 0;
}