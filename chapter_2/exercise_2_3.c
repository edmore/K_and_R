/* Convert string of hexadecimal digits into its numeric equivalent */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int count;
int htoi(char s[]);

int main()
{
  int i = 0;
  int value;
  char c;
  char s[10];

  for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  count = i;
  value = htoi(s);
  printf("%i\n", value);
  return 0;
}

int htoi(char s[])
{
  int i, n;
  n=0;

  printf("%i\n", count);

  for (i = 0; isdigit(s[i]) || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F') ; ++i){
    if (isdigit(s[i])){
      n = (s[i] - '0');
    }else{
      s[i] = tolower(s[i]);
      switch ( s[i] ){
      case 'a': n = 10;
        break;
      case 'b': n = 11;
        break;
      case 'c': n = 12;
        break;
      case 'd': n = 13;
        break;
      case 'e': n = 14;
        break;
      case 'f': n = 15;
        break;
      }
    }
  }
  return n;
}
