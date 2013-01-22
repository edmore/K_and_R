/* Delete any character in s1 that matches any character in s2 */

#include <stdio.h>

void squeeze(char s[], char t[]);

int main()
{
  char s[] = "hello";
  char t[] = "ello";
  squeeze(s, t);
  printf("%s\n", s);
  return 0;
}


void squeeze(char s[], char t[])
{

  int i, j;
  int  k; //maintains the index

  for (i=0; t[i] != '\0'; ++i)
    {
      for (j=k=0; s[j] != '\0'; ++j)
        {
          if (s[j] != t[i])
            {
              s[k++] = s[j];
            }
        }
    }

  s[k] = '\0';
}

