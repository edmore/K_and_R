// some pointer arithmetic : KandR

#include <stdio.h>

size_t my_strlen(char *);

size_t my_strlen(char *s)
{
  char *p = s; // p now points to the address &name[0]
  while (*p != '\0')
    p++; //moves to the end of the string

  // this is the difference between the positions of the pointers:
  return p - s;
}


int main(void)
{
  char name[] = "Edmore";
  printf("Length of %s is %zd\n", name, my_strlen(name));
  return 0;
}
