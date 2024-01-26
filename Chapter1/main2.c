/*
 * testing other printf modifiers 
 */

#include <stdio.h>
main()
{
  int oct, hex;
  char c;
  char str [] = "Hello";

  oct = hex = 20;
  c = 'H';
  int i = 0;
  #include <stdio.h>
  while("Hello"[i])
  {
    str[i] = "Hello"[i];
    i++;
  }

  printf("oct:%o\nhex:%x\nchar:%c\nstring:%s\n%%", oct, hex, c, str);
}
