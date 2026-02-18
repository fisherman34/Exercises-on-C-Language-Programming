//判断两个数之间的素数
#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);

int main()
{
  int n1, n2, i, flag;

  printf("输入两个正整数： ");
  scanf("%d %d", &n1, &n2);
  printf("%d 和 %d 间的素数为： ", n1, n2);

  for(i = n1 + 1; i < n2; i++)
  {
    flag = checkPrimeNumber(i);

    if(flag == 1)
      printf("%d ", i);
  }

  return 0;
}

int checkPrimeNumber(int n)
{
  int j, flag = 1;  //默认是素数
  for(j = 2; j <= sqrt(n) + 1; j++)
  {
    if(n%j == 0)
    {
      flag = 0;  //不是素数，跳出循环
      break;
    }
  }
  return flag;
}