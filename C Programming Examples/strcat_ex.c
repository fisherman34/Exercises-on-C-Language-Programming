/*
C 库函数 char *strcat(char *dest, const char *src) 
把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。

*/

#include <stdio.h>
#include <string.h>

int main()
{
  char src[50], dest[50];
  
  strcpy(src, "This is source");
  strcpy(dest, "This is destination");

  strcat(dest, src);

  printf("最终的目标字符串： |%s|", dest);

  return 0;
}