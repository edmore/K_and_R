#include <stdio.h>

int main(void)
{
  char name[] = "Edmore";
  char *pa;
  // name of array is synonym for first element &a[0]
  pa = name; // pointer is a variable, array name isnt

  // arrays and pointers 101
  printf("the first character is %c\n", *pa);
  printf("the preceding character is %c\n", *(pa+1)); //contents of the second element
  // interesting : C actually evaluates arrays like so; equivalent to top statement
  printf("the preceding character is %c\n", *(name+1)); //contents of the second element

  // printing out all elements in name:
  while (*pa != '\0'){
    printf("%c", *pa);
    pa++;
  }

  return 0;
}
