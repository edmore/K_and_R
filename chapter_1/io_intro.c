/* Intro to basic Input output */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;

  while((c = getchar()) != EOF){
    putchar(c);
  }
  return 0;
}
