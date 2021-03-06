/* Print histogram of words in sentence */

#include <stdio.h>
#define MAX 10

int main()
{
  int c;
  int nc = 0;
  int nw = 0;
  int i,j,k;
  int histogram[MAX];

  // initialize array with zeros
  for (j = 0; j < MAX; j++)
    histogram[j] = 0;

  printf("Please input a sentence ( maximum %d words ) and press enter when you are done:\n", MAX);
  // exit the loop if the user enters a newline character
  while ((c = getchar()) != '\n'){
    // ignore the blank spaces or tabs
    if (c != ' ' && c != '\t'){
      // populate each index with the character count
      histogram[nw] = ++nc;
    } else {
      nc = 0;
      if (nw == (MAX-1))
	break;
      nw++;
    }
  }

  printf("\n");
  printf("Histogram of words:\n");
  for (i = 0; i <= nw; ++i){
    printf("%2.0d|", histogram[i]);
    for (k = 0; k < histogram[i]; ++k)
      printf("=");
    printf("\n");
  }

  return 0;
}
