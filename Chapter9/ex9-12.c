#include <stdio.h>
#include <string.h>

void alltrim(char *psstr, char *pdstr);

int main()
{
  char *pstr, str[20];
  //the "value" of a string literal is just the memory address of its first character.
  pstr = "   Good Bye!   "; 

  printf("before alltrim: %s\n", pstr);
  alltrim(pstr,str);
  printf("after alltrim: %s\n", str);
  return 0;
}

void alltrim(char *psstr, char *pdstr)
{
  char *pstart, *pend;

  pstart = psstr;
  while (*pstart == ' ')
    pstart++;
  

  pend = pstart + strlen(pstart) - 1;
  while(pend > pstart && *pend == ' ')
    pend--;


  while (pstart <= pend)
    *pdstr++ = *pstart++;
  *pdstr = '\0';
}