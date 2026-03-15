//计算字符串长度

#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000];
  int len;

  printf("输入字符串： ");

  /*
  In most expressions in C, an array name automatically converts to a pointer to its first element.
  s  ≈  &s[0]
  s → address of the first character
  */
  scanf("%s", s);
  len = strlen(s);

  printf("字符串长度： %d", len);

  printf("\n=================\n");

  printf("%X %X\n", s, &s);
  printf("%p %p", (void*)s, (void*)&s);
  return 0;
}