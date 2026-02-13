#include <stdio.h>
#define CUSNULL 0

int main()
{
  char **p;
  char *name[] = {"hello", "good", "world", "bye", ""};

  p = name + 1;
  printf("%x: %s ", *p, *p);
  p += 2;
  while (**p != CUSNULL)
  {
    printf("%s\n", *p++);
  }
  return 0;
}