#include <stdio.h>

void ReadInput()
{
  char buffer[8];
  gets(buffer);
  puts(buffer);
}

int main()
{
  ReadInput();
  return 0;
}
