/* Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main(int argc, char *argv[]){
  int value;

  value = (getchar() != EOF);
  printf("Value is %d\n", value);
  return 0;
}
