#include <stdio.h>
#define  dprint(expr)  printf(#expr " = %i\n", expr)

int main()
{
  int x = 6;
  int y = 2;

  dprint(x+y);
  return 0;
}
