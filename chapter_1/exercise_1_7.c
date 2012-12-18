/* print the value of EOF */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;

  printf("The value of EOF is %d\n", EOF);
  printf("To confirm type [Ctrl-D] if you are on a Mac or [Ctrl-Z] on Windows\n");
  c = getchar();
  printf("The value of the input is %d\n", c);
  return 0;
}
