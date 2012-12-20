/* Fahrenheit to Celsius conversion using function */

#include <stdio.h>
#define LOWER 0
#define MAX 300
#define STEP 20

float fahr_to_celsius(int fahr);

int main(int argc, char *argv[])
{
  int i;
  for (i = LOWER; i <= MAX ; i+=STEP)
    printf("%3d\t%6.1f\n",i, fahr_to_celsius(i));

  return 0;
}


float fahr_to_celsius(int fahr)
{
  float  celsius = (5.0/9.0) * (fahr - 32);
  return celsius;
}
