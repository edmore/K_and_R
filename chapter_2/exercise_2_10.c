/* Lower using conditional expression */

#include <stdio.h>

char  lower(char c);

int main(){
  printf("%c\n", lower('B'));
  return 0;
}

char lower(char c){
  return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}
