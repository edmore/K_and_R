/* Determine ranges of the various data types */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("Ranges :\n");
  printf("-------------------------------------------\n");
  printf("char %i to %i\n",CHAR_MIN, CHAR_MAX);
  printf("short %i to %i\n",SHRT_MIN, SHRT_MAX);
  printf("int %i to %i\n",INT_MIN, INT_MAX);
  printf("long %li to %li\n",LONG_MIN, LONG_MAX);
  printf("signed char %i to %i\n",SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char 0 to %i\n",UCHAR_MAX);
  printf("unsigned short 0 to %i\n",USHRT_MAX);
  printf("unsigned int 0 to %u\n",UINT_MAX);
  printf("unsigned long 0 to %lu\n",ULONG_MAX);
  printf("-------------------------------------------\n");
  printf("float %f to %E\n",FLT_MIN, FLT_MAX);
  printf("double %f to %E\n",DBL_MIN, DBL_MAX);

  return 0;
}
