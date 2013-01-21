/* Delete any character in s1 that matches any character in s2 */

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
  char s1[] = "hello";
  char s2[] = "ello";
  squeeze(s1, s2);
  return 0;
}


void squeeze(char s1[], char s2[])
{
  printf("%s\n", s1);
}

