/* Function that reverses a character string */

#include <stdio.h>
#define MAXLINE 100

void reverseline(char line[], int length);
int gline(char line[], int maxline);

int main()
{
  int c, i, len;
  char line[MAXLINE];

  len = gline(line, MAXLINE);
  reverseline(line, len);
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

void reverseline(char s[], int len){
  int i = len;

  while(i >= 0){
    printf("%c", s[i]);
    --i;
  }
}
