#include <stdio.h>

/*
Signum function implementation (signal/systems/DSP)
returns -1 if input is  negative
returns 0 if input is zero
returns +1 if input is positive
*/

ssize_t signum(ssize_t input){
  printf("From shared library, The input is %li\n", input);
  if(0 == input)
    return 0;

  return input < 0 ? -1 : 1;
}
