/* print input one word per line */

#include <stdio.h>

main()
{
  int c;

  while((c = getchar()) != EOF){
    if(c == '\n' || c == ' ' || c == '\t')
      printf("\n");
    else
      putchar(c);
  }
}
