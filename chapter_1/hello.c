/* hello.c */

#include <stdio.h>

int main(int argc, char *argv[]){
  if(argv[1]){
    printf("Hello!!, %s is back to the world of C!\n", argv[1]);
  }
  return 0;
}
