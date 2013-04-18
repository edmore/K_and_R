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
  char name[] = "Edmore";
  x = 1;
  y = 2;


  printf("x is %i and y is %i.\n", x, y);
  // swap
  swap(&x, &y);
  printf("x is %i and y is %i.\n", x, y);

  char * pa;
  //name of array is synonym for first element &a[0]
  pa = name; // pointer is a variable, array name isnt

  // arrays and pointers 101
  printf("the first character is %c\n", *pa);
  printf("the preceding character is %c\n", *(pa+1)); //contents of the second element
  // interesting : C actually evaluates arrays like so; equivalent to top statement
  printf("the preceding character is %c\n", *(name+1)); //contents of the second element

  return 0;
}
