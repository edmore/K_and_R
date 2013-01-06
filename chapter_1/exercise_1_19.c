/* Function that reverses a character string */

#include <stdio.h>
#define MAXLINE 100

void reverse(char line[], int length);
int gline(char line[], int maxline);

int main()
{
  int c, i, len, max;
  char line[MAXLINE];

  max = 0;
  while ((len = gline(line, MAXLINE)) > 0) {
    if (len > max) {
      reverse(line, len);
    }
  }

  return 0;
}

int gline(char s[], int lim) {
  int c, i;

  for (i= 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void reverse(char s[], int len){
  int i = len;

  while(i >= 0){
    printf("%c", s[i]);
    --i;
  }
  printf("\n");
}
