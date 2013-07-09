#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(void)
{
  struct point pt, *pp = &pt;
  pt.x = 3;

  printf("%d\n", (*pp).x);
  // same as ...
  printf("%d\n", pp->x);
  return 0;
}
