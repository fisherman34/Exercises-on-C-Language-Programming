//将一个变量的字符串复制到另外一个变量中。

#include <stdio.h>
#include <string.h> // 引入 string.h 头文件以使用 memset

int main() {
  
  char src[40];
  char dest[100];

  memset(dest, '\0', sizeof(dest));
  strcpy(src, "This is runoob.com");
  strcpy(dest, src);

  printf("最终的目标字符串： %s\n", dest);

  return 0;
}