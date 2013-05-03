#include <stdio.h>

void str_cpy(char *, char *);

void str_cpy(char *s, char *t)
{
  // no need to use '\0', '/0' also copied.
  while ((*s++ = *t++))
    ;
}

int main(void)
{
  char name[] = "Edmore";
  char surname[] = "Moyo";

  str_cpy(name, surname);
  printf("Name is %s, surname is %s\n", name, surname);
  return 0;
}
