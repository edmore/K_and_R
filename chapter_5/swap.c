#include <stdio.h>

void swap(int *, int *);

void swap(int *p, int *q)
{
  int temp;
  temp = *p; // salvage the contents (of type int) that p points to
  *p = *q;
  *q = temp;
}

int main(void)
{
  int x, y;
  x = 1;
  y = 2;

  printf("x is %i and y is %i.\n", x, y);
  // swap
  swap(&x, &y);
  printf("x is %i and y is %i.\n", x, y);

  return 0;
}
