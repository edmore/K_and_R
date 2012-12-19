/* Print histogram of words in sentence */

#include <stdio.h>
#define MAX 10

main(){
  int c;
  int nc = 0;
  int nw = 0;
  int i,j,k;
  int histogram[MAX];

  // initialize array to array of zeros
  for (j = 0; j < MAX; j++)
    histogram[j] = 0;

  printf("Please input a sentence ( maximum %d words ) and press enter when you are done:\n", MAX);
  // exit the loop if the user enters a newline character
  while ((c = getchar()) != '\n'){
    // ignore the blank spaces
    if (c != ' '){
      // populate each index with the character count
      histogram[nw] = ++nc;
    }else{
      nc = 0;
      ++nw;
    }
  }

  printf("\n");
  printf("Histogram of words:\n");

    for (i = 0; i <= nw; ++i){
      printf("%2.0d|", histogram[i]);
      for(k = 0; k < histogram[i]; ++k)
        printf("=");
      printf("\n");
    }

}
