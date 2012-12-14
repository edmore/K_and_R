/* Fahrenheit to Celsius conversion */

#include <stdio.h>
#define STEP 20
#define LOWER 0
#define MAX 300

int main(int argc, char *argv[]){
  float celsius;
  int fahr;

  for(fahr = LOWER; fahr <= MAX ; fahr+=STEP){
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3d\t%6.1f\n", fahr, celsius);
  }
  return 0;
}
