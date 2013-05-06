#include <stdio.h>

int main(void)
{
  int i = 0;
  char  *my_pointers[] = {"Edmore", "Moyo"};

  for( i = 0; i < 2; i++)
    printf("%s\n", my_pointers[i]);

  return 0;
}
