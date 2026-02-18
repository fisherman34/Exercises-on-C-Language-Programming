//判断Armstrong数(阿姆斯壮数)
#include <stdio.h>

int main()
{
  int number, originalNumber, remainder, result = 0;

  printf("输入三位数： ");
  scanf("%d", &number);

  originalNumber = number;

  while (originalNumber != 0)
  {
    remainder = originalNumber % 10;
    result += remainder * remainder * remainder;
    originalNumber /= 10;
  }

  if(result == number)
    printf("%d 是 Armstrong 数", number);
  else
    printf("%d 不是 Armstrong 数", number);

  return 0;
}