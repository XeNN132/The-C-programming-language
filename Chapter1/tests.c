#include <stdio.h>

int main()
{
  int i = 0;
  while ("Hello"[i])
  {
    printf("%c\n", "Hello"[i]); // prints H
    i++;
  }
  return 0;
}

