//a、b、c 三个变量，通过引用按顺序循环替换他们的值。
/*
int *a;
This line declares a variable.
Meaning: a is a pointer
it stores the address of an integer

printf("%d", *p);
When using the variable → * means “dereference”
Here *p means:
Go to the address stored in p and read the value there.
*/
#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main()
{
  int a, b, c;

  printf("输入 a， b，c 的值：");
  scanf("%d %d %d", &a, &b, &c);

  printf("交换前:\n");
  printf("a = %d \nb = %d\nc = %d\n", a, b, c);

  cyclicSwap(&a, &b, &c);

  printf("交换后：\n");
  printf("a = %d \nb = %d\nc = %d\n", a, b, c);

  return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
  int temp;

  temp = *b;
  *b = *a;
  *a = *c;
  *c = temp;
}