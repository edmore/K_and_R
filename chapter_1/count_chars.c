/* Count chars */

#include <stdio.h>

int main()
{
  char c;
  int nc = 0;

  for (nc = 0; (c = getchar()) != EOF && c != '\n' ; ++nc)
    ;

  printf("%i\n", nc);
  return 0;
}
