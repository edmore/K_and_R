/* Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main(int argc, char *argv[]){
  int value;

  printf("Type any key, on Mac [Ctrl-D] is EOF\n");
  printf("Value is %d\n", getchar() != EOF);
  return 0;
}
