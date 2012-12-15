/* Count chars */

#include <stdio.h>

main(){
  double nc = 0;

  for (nc = 0; getchar() != EOF ; ++nc)
    ;
  printf("%.0f\n", nc);
}
