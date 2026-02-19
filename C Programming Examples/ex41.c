//字符串翻转-非递归
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int length, i;

  printf("请输入一个字符串：");
  fgets(str, sizeof(str), stdin );
  length = strlen(str);
  
  printf("翻转后的字符串：");
  for (i = length -1; i >= 0; i--)
  {
    if (str[i] == '\n')
      continue; // 跳过换行符
    printf("%c", str[i]);
  }

  printf("\n");

  return 0;
}