/*
判断一个数是否为回文数。

设n是一任意自然数。若将n的各位数字反向排列所得自然数n1与n相等，则称n为一回文数。
例如，若n=1234321，则称n为一回文数；但若n=1234567，则n不是回文数
*/

#include <stdio.h>
#include <string.h>

int countDigits(long long number);

int main()
{
  int count;  //输入数的位数
  int i, j = 0;  //循环时用到的参数
  long long n; 

  printf("请输入一个数: ");
  scanf("%ld", &n);
  count = countDigits(n);
  char s[count], s1[count];
  sprintf(s, "%ld", n);

  for(i = count -1; i >= 0; i --)
  {
    s1[j++]=s[i];
  }

  printf("%s %s\n", s, s1);
  if(!strcmp(s, s1))
    printf("整数%ld是回文串", n);
  else
    printf("整数%ld不是回文串", n);
  return 0;
}

//判断数字为几位数的函数
int countDigits(long long number)
{
  int count = 0;

  while( number != 0)
  {
    number /= 10;
    count++;
  }

  return count;
}