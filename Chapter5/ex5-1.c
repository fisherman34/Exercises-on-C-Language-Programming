#include <stdio.h>
#include <conio.h>

void main()
{
  char ch, ch1, ch2;

  ch = getche();
  putchar('\n');
  ch1 = ch == 'a' ? 'z' : ch -1;
  ch2 = ch == 'z' ? 'a' : ch +1;
  printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
}