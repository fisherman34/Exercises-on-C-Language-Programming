#include <stdio.h>

int main()
{
  char ch;

  ch = getchar();
  printf("%c ACCII code is %d\n", ch -1, ch -1);
  printf("%c ACCII code is %d\n", ch, ch);
  printf("%c ACCII code is %d\n", ch + 1, ch + 1);
  return 0;
}