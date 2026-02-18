//判断Armstrong数(阿姆斯壮数)
#include <stdio.h>
#include <math.h>

int checkArmstrongNumber(int n);


int main()
{
  int low, high, i, flag;

  printf("输入两个整数： ");
  scanf("%d %d", &low, &high);
  printf("%d 和 %d 之间的 Armstrong数为： ", low, high);

  for(i = low + 1; i < high; i++)
  {
    flag = checkArmstrongNumber(i);
    if (flag == 1)
    {
      printf("%d ", i);
    }
  }

  return 0;
}

int checkArmstrongNumber(int number)
{
  int originalNumber, remainder, result = 0, n = 0, flag;

  originalNumber = number;

  while (originalNumber != 0)
  {
    originalNumber /= 10;
    n++;
  }

  originalNumber = number;

  while (originalNumber != 0)
  {
    remainder = originalNumber % 10;
    result += pow(remainder, n);
    originalNumber /= 10;
  }

  if(result == number)
    flag = 1;
  else
    flag = 0;

  return flag;
}