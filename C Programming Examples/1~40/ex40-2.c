//八进制转换为二进制
#include <stdio.h>
#include <math.h>

long long convertOctalToBinary(int octalNumber);

int main() {
    int octalNumber;

    printf("请输入一个八进制数: ");
    scanf("%d", &octalNumber);

    long long binaryNumber = convertOctalToBinary(octalNumber);
    printf("八进制数 %d 转换为二进制数为: %lld\n", octalNumber, binaryNumber);

    return 0;
}

long long convertOctalToBinary(int octalNumber)
{
  int decimalNumber = 0, i = 0;
  long long binaryNumber = 0;

  while(octalNumber != 0) {
    decimalNumber += (octalNumber % 10) * pow(8, i);
    octalNumber /= 10;
    i++;
  }

  i = 1;
  while(decimalNumber != 0) {
    binaryNumber += (decimalNumber % 2) * i;
    decimalNumber /= 2;
    i *= 10;
  }

  return binaryNumber;
}