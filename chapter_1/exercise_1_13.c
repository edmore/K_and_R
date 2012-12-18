/* Count chars */

#include <stdio.h>

main(){
  int nc = 0;
  int c, i;

  while ((c = getchar()) != EOF){
    if (c != '\n'){
      ++nc;
    }
  }

  printf("%d|", nc);
  for (i = 0; i < nc; ++i)
    printf("=");

  printf("\n");
}
