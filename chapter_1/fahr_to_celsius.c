/* Fahrenheit to Celsius conversion */

#include <stdio.h>

int main(int argc, char *argv[]){
  int celsius;
  int fahr = 0;
  int limit = 300;
  int step = 20;

  for(fahr = 0; fahr <= limit ; fahr=fahr+step){
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%i\t%i\n", fahr, celsius);
  }
  return 0;
}
