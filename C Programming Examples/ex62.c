#include <stdio.h>

struct  student
{
  char name[50];
  int roll;
  float marks;
} s;

int main()
{
  printf("输入信息： \n");

  /*
  In C, an array name automatically decays into a pointer to 
  its first element.
  s.name already represents the address: &s.name[0]
  */
  printf("输入名字： ");
  scanf("%s", s.name);
  
  printf("输入编号： ");
  scanf("%d", &s.roll);
  
  printf("输入名字： ");
  scanf("%f", &s.marks);

  printf("显示信息： \n");

  printf("名字： ");
  puts(s.name);

  printf("编号： %d\n", s.roll);

  printf("成绩: %.1f\n", s.marks);

  return 0;

}
