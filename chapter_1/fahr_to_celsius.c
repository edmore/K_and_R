/* Fahrenheit to Celsius conversion */

#include <stdio.h>

int main(int argc, char *argv[]){
  float celsius;
  int fahr;
  int limit = 0;
  int step = 20;

  for(fahr = 300; fahr >= limit ; fahr-=step){
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3d\t%6.1f\n", fahr, celsius);
  }
  return 0;
}
