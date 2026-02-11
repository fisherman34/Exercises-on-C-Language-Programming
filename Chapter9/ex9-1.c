#include <stdio.h>

int main()
{
  unsigned short a;         //A short usually occupies 2 bytes (16 bits) of memory.
  unsigned short *pi = &a;  //A pointer that treats those 2 bytes as a single numerical unit.
  char *pc = (char *)&a;    //A pointer that treats the exact same memory address as a sequence of 1-byte characters.

  /*
  You write the hex value F0F0 into the 2-byte space. 
  In memory, it looks like this: [F0] [F0] / 1111 0000 1111 0000
  */
  *pi = 0XF0F0;

  /*
  This is the tricky part. Since pc is a char pointer, it only points to the first byte of a. 
  This line sets only that first byte to 00.

  In a Little-Endian system, the "least significant byte" is stored first. 
  When you set *pc = 0, you are overwriting the "lower" half of the short.
  Original: 11110000 11110000 (F0F0)
  After *pc = 0: 11110000 00000000 (The first byte becomes 00)
  Final Output: a = F000
  */
  *pc = 0;
  printf("a = %X", a);
  return 0;
}