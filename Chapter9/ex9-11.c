#include <stdio.h>
#define CUSNULL 0

int main()
{
  char **p;
  char *name[] = {"hello", "good", "world", "bye", ""};
  printf("%X,%X,%X,%X\n", name[0],name[1],name[2],name[3]);

  p = name + 1;
  printf("*p = %X: *p =  %s \n", *p, *p);
  p += 2;
  while (**p != CUSNULL)
  {
    printf("%s\n", *p++);
  }
  return 0;
}