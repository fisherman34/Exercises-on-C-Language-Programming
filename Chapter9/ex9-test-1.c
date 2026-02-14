#include <stdio.h>

int main()
{
  int a = 20;
  int *p;
  p = &a;

  printf("%X\n", p);
  printf("%X\n", *p);
  
  return 0;
}