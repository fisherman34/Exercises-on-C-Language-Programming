//通过用户输入指定的数值，来判断最大值。

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, num;
  float *data;

  printf("输入元素个数(1 ~ 100): ");
  scanf("%d", &num);

  // 为‘num’元素分配内存
  data = (float*) calloc(num, sizeof(float));

  if(data == NULL)
  {
    printf("Error!! 内存没有分配。");
    exit(0);
  }

  printf("\n");

/*
data + i is pointer arithmetic. 
It means : the address of the i-th element in the array that data points to.

data[i]      = *(data + i)
&data[i]     = data + i
*/
  for(i = 0; i < num; i++)
  {
    printf("输入数字 %d: ", i + 1);
    scanf("%f", data + i);
  }

  for(i = 1; i < num; i++)
  {
    if(*data < *(data + i))
      *data = *(data + i);
  }

/*
*data means:
read the value stored at the address contained in data.
data points to the first element:
*/
  printf("最大元素 = %.2f", *data);

  return 0;
}