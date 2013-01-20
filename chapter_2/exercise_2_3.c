/* Convert string of hexadecimal digits into its numeric equivalent */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <math.h>

#define MAXLINE 10

int count;
int htoi(char s[]);

int main()
{
  int i = 0;
  int j = 0;
  int value;
  char c;
  char s[MAXLINE];

  while ( (c=getchar()) != EOF && c != '\n' ){
    c = tolower(c);
    if (c == '0' || c == 'x'){
      ;
    }else{
      s[i] = c;
      ++j;
      ++i;
    }
  }

  count = j;
  value = htoi(s);
  return 0;
}

int htoi(char s[])
{
  int i, n, base;
  base = count - 1;
  n = 0;

  for (i = 0; i < count; ++i){
    if ( isdigit(s[i]) || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F') ){
      if (isdigit(s[i])){
        n = n + ( pow(16,base) * (s[i] - '0') );
      }else{
        switch ( s[i] ){
        case 'a': n = n + ( pow(16,base) * 10 );
          break;
        case 'b': n = n + ( pow(16,base) * 11 );
          break;
        case 'c': n = n + ( pow(16,base) * 12 );
          break;
        case 'd': n = n + ( pow(16,base) * 13 );
          break;
        case 'e': n = n + ( pow(16,base) * 14 );
          break;
        case 'f': n = n + ( pow(16,base) * 15 );
          break;
        }
      }
      --base;
    }
  }
  return n;
}
